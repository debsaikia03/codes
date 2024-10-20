#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head = NULL;
int n = 0; // Initialize the count of elements to 0

void push(int m)
{
  if (n < m)
  {
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));

    if (p == NULL)
    {
      printf("Memory allocation failed. Exiting.\n");
      exit(1);
    }

    printf("Enter data: ");
    scanf("%d", &p->data);

    p->next = head;
    head = p;

    n++; // Increment the count of elements
  }
  else
  {
    printf("\nOverflow!\n");
  }
}

void pop()
{
  if (head == NULL)
  {
    printf("\nUnderflow!\n");
  }
  else
  {
    struct node *q = head;
    head = head->next;
    free(q);
    n--; // Decrement the count of elements
  }
}

void show()
{
  struct node *q = head;
  
  if (q == NULL)
  {
    printf("\nStack is empty!\n");
    return;
  }

  printf("Stack elements: ");
  while (q != NULL)
  {
    printf("%d ", q->data);
    q = q->next;
  }
  printf("\n");
}

void isempty()
{
  if (head == NULL)
    printf("\nStack is empty!\n");
  else
    printf("\nStack is not empty!\n");
}

int main()
{
  int m;
  int choice;

  printf("Enter stack capacity: ");
  scanf("%d", &m);

  while (1)
  {
    printf("\n***MENU***");
    printf("\n1. PUSH");
    printf("\n2. POP");
    printf("\n3. IsEmpty");
    printf("\n4. SHOW");
    printf("\n5. EXIT");
    printf("\nEnter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
      case 1:
        push(m);
        break;
      case 2:
        pop();
        break;
      case 3:
        isempty();
        break;
      case 4:
        show();
        break;
      case 5:
        return 0;
      default:
        printf("Invalid choice. Please choose a valid option.\n");
    }
  }
}
