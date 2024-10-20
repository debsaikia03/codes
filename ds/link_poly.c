#include <stdio.h>
#include <stdlib.h>

struct node
{
  int coeff;
  struct node *next;
};

int main()
{
  struct node *p1, *head1, *p2, *head2, *p3, *head3, *r1, *r2, *r3;

  int m, n;

  printf("Polynomial 1\n");
  printf("Enter the highest degree: ");
  scanf("%d", &m);

  p1 = (struct node *)malloc(sizeof(struct node));

  printf("Enter coefficient of degree 0: ");
  scanf("%d", &p1->coeff);

  p1->next = NULL;

  head1 = p1;

  int i = 1;
  while (i < m + 1)
  {
    struct node *q1;
    q1 = (struct node *)malloc(sizeof(struct node));
    printf("Enter coefficient of degree %d: ", i);
    scanf("%d", &q1->coeff);
    p1->next = q1;
    q1->next = NULL;
    p1 = p1->next;
    i++;
  }

  r1 = head1;

  printf("\nPoly1: ");
  i = 0;
  while (r1 != NULL)
  {
    printf("%dx^%d", r1->coeff, i);
    if (r1->next != NULL)
    {
      printf(" + ");
    }
    r1 = r1->next;
    i++;
  }
  printf("\n");

  printf("\nPolynomial 2\n");
  printf("Enter the highest degree: ");
  scanf("%d", &n);

  p2 = (struct node *)malloc(sizeof(struct node));

  printf("Enter coefficient of degree 0: ");
  scanf("%d", &p2->coeff);

  p2->next = NULL;

  head2 = p2;

  int j = 1;
  while (j < n + 1)
  {
    struct node *q2;
    q2 = (struct node *)malloc(sizeof(struct node));
    printf("Enter coefficient of degree %d: ", j);
    scanf("%d", &q2->coeff);
    p2->next = q2;
    q2->next = NULL;
    p2 = p2->next;
    j++;
  }

  r2 = head2;

  printf("\nPoly2: ");
  i = 0;
  while (r2 != NULL)
  {
    printf("%dx^%d", r2->coeff, i);
    if (r2->next != NULL)
    {
      printf(" + ");
    }
    r2 = r2->next;
    i++;
  }
  printf("\n");

  p1 = head1;
  p2 = head2;
  if (m < n)
  {
    p3 = (struct node *)malloc(sizeof(struct node));

    p3->coeff = p1->coeff + p2->coeff;

    p3->next = NULL;

    head3 = p3;

    p1 = p1->next;
    p2 = p2->next;

    int k = 1;
    while (k < m + 1 && p1 != NULL)
    {
      struct node *q3;
      q3 = (struct node *)malloc(sizeof(struct node));
      q3->coeff = p1->coeff + p2->coeff;
      p3->next = q3;
      q3->next = NULL;
      p1 = p1->next;
      p2 = p2->next;
      p3 = p3->next;
      k++;
    }

    while (k < n + 1 && p2 != NULL)
    {
      struct node *q3;
      q3 = (struct node *)malloc(sizeof(struct node));
      q3->coeff = p2->coeff;
      p3->next = q3;
      q3->next = NULL;
      p2 = p2->next;
      p3 = p3->next;
      k++;
    }

    r3 = head3;

    r3 = head3;

    printf("\nSum: ");
    i = 0;
    while (r3 != NULL)
    {
      printf("%dx^%d", r3->coeff, i);
      if (r3->next != NULL)
      {
        printf(" + ");
      }
      r3 = r3->next;
      i++;
    }
  }

  else if (m > n)
  {
    p3 = (struct node *)malloc(sizeof(struct node));

    p3->coeff = p1->coeff + p2->coeff;

    p3->next = NULL;

    head3 = p3;

    p1 = p1->next;
    p2 = p2->next;

    int k = 1;
    while (k < n + 1 && p2 != NULL)
    {
      struct node *q3;
      q3 = (struct node *)malloc(sizeof(struct node));
      q3->coeff = p1->coeff + p2->coeff;
      p3->next = q3;
      q3->next = NULL;
      p1 = p1->next;
      p2 = p2->next;
      p3 = p3->next;
      k++;
    }

    while (k < m + 1 && p1 != NULL)
    {
      struct node *q3;
      q3 = (struct node *)malloc(sizeof(struct node));
      q3->coeff = p1->coeff;
      p3->next = q3;
      q3->next = NULL;
      p1 = p1->next;
      p3 = p3->next;
      k++;
    }

    r3 = head3;

    printf("\nSum: ");
    i = 0;
    while (r3 != NULL)
    {
      printf("%dx^%d", r3->coeff, i);
      if (r3->next != NULL)
      {
        printf(" + ");
      }
      r3 = r3->next;
      i++;
    }
  }

  else if (m == n)
  {
    p3 = (struct node *)malloc(sizeof(struct node));

    p3->coeff = p1->coeff + p2->coeff;

    p3->next = NULL;

    head3 = p3;

    p1 = p1->next;
    p2 = p2->next;

    int k = 0;
    while (k < n + 1 && p1 != NULL && p2 != NULL)
    {
      struct node *q3;
      q3 = (struct node *)malloc(sizeof(struct node));
      q3->coeff = p1->coeff + p2->coeff;
      p3->next = q3;
      q3->next = NULL;
      p1 = p1->next;
      p2 = p2->next;
      p3 = p3->next;
      k++;
    }

    r3 = head3;

    printf("\nSum: ");
    i = 0;
    while (r3 != NULL)
    {
      printf("%dx^%d", r3->coeff, i);
      if (r3->next != NULL)
      {
        printf(" + ");
      }
      r3 = r3->next;
      i++;
    }
  }
}