#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head = NULL;
int k = 1;

void push(int a)
{


  if (k <= a)
  {
    struct node *p;

    p = (struct node *)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &p->data);

    p->next = head;
    head = p;
    p = NULL;
    free(p);

    k++;
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
    printf("\nElement popped!\n");

    head = head->next;

    k--;
  }
}

void show()
{
  struct node *q;

  if (head == NULL)
  {
    printf("\nUnderflow!\n");
  }

  q = head;

  while (q!=NULL)
  {
    printf("%d ", q->data);
    q = q->next;
  }
}

void isempty()
{
  if (head == NULL)
    printf("\nStack Empty!\n");

  else
    printf("\nStack Not Empty!\n");
}

void isfull(int a, int b)
{
  if (a == b)
    printf("\nStack Full\n");

  else
    printf("\nStack Not Full!\n");
}

int main()
{

  int m, n=0,c=0;

  printf("Enter stack capacity: ");
  scanf("%d", &m);

  while (n != 6)
  {
    printf("\n***MENU***");
    printf("\n1. PUSH");
    printf("\n2. POP");
    printf("\n3. IsEmpty");
    printf("\n4. IsFull");
    printf("\n5. SHOW");
    printf("\n6. EXIT");
    printf("\nEnter choice: ");
    scanf("%d", &n);

    if (n == 1)
    {
      push(m);

      if(c<m)
       c++;
    }

    else if (n == 2)
    {
      pop();

      if(c>0)
       c--;
    }

    else if (n == 3)
    {
      isempty();
    }

    else if (n == 4)
    {
      isfull(m,c);
    }

    else if (n == 5)
    {
      show();
    }

    else if (n == 6)
    {
      return 0;
    }
  }
}