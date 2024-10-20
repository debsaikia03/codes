#include <stdio.h>
#include <stdlib.h>

struct node
{
  int coeff;
  struct node *next;
};

int main()
{
  struct node *p, *head, *r;

  int m, a;

  printf("Polynomial 1\n");
  printf("Enter the highest degree: ");
  scanf("%d", &m);

  a = m+1;

  p = (struct node *)malloc(sizeof(struct node));

  printf("Enter coefficient of degree 0: ");
  scanf("%d", &p->coeff);

  p->next = NULL;

  head = p;

  int i = 1;
  while (i < a)
  {
    struct node *q;
    q = (struct node *)malloc(sizeof(struct node));
    printf("Enter coefficient of degree %d: ", i);
    scanf("%d", &q->coeff);
    p->next = q;
    q->next = NULL;
    p = p->next;
    i++;
  }

  r = head;

  while (r != NULL)
  {
    printf("%d ", r->coeff);
    r = r->next;
  }
}

