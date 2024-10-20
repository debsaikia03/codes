#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void insert(struct node *a, struct node *b, struct node *c)
{
  struct node *s, *r;
  s = (struct node *)malloc(sizeof(struct node));

  printf("Enter data for new node: ");
  scanf("%d", &s->data);

  if (a == c && b != c->next)
  {
    s->next = a;
    c = s;
  }

  else
  {
    a->next = s;
    s->next = b;
  }

  r = c;

  printf("\nUpdated linked lists:\n");

  while (r != NULL)
  {
    printf("%d ", r->data);
    r = r->next;
  }
}

void delete(struct node *a, struct node *b, struct node *c)
{
  if (a == c && b != c->next)
  {
    c = a->next;
  }

  else
    a->next = b->next;

  struct node *r;

  r = c;

  printf("\nUpdated linked lists:\n");

  while (r != NULL)
  {
    printf("%d ", r->data);
    r = r->next;
  }
}

void search(int a, struct node *h)
{
  int c = 1;

  struct node *g;
  g = h;

  while (g != NULL)
  {
    if (a == g->data)
    {
      printf("Element found!\nThe element is at %d position.\n", c);
      break;
    }
    c++;
    g = g->next;
  }

  if (g == NULL)
  {
    printf("\nElement not found\n");
  }
}

void ascend(struct node *h)
{
    struct node *a, *b, *d;
    a = d = h;
    
    int temp;

    while(a != NULL)
    {
      b = a->next;
      
      while(b != NULL)
      {
        if(a->data > b->data)
        {
            temp=a->data;
            a->data=b->data;
            b->data=temp;
        }
        b = b->next;
      }
      a = a->next;
    }
   
    printf("\nLinked lists in ascending order:\n");
    while (d != NULL)
    {
        printf("%d ", d->data);
        d = d->next;
    }
    printf("\n");
}

 void rev(struct node *h)
 {
    struct node *curr, *next, *prev,*q,*s;

    curr=h;
    next = NULL;
    prev = NULL;
    q=h;
    
    while(curr != NULL)
    {
      next= curr->next;
      curr->next= prev;
      prev=curr;
      curr=next;
      q=prev;
    }

    s=q;
    
    printf("\nThe reversed linked lists:\n");

    while(s != NULL)
    {
        printf("%d ",s->data);
        s=s->next;
    }
    printf("\n");
 }

int main()
{
  struct node *head, *p, *r, *q;

  int m, n;

  printf("Enter no. of nodes: ");
  scanf("%d", &n);

  p = (struct node *)malloc(sizeof(struct node));

  printf("Enter data for node 1: ");
  scanf("%d", &p->data);

  p->next = NULL;

  head = p;
  q = p;

  int i = 1;
  while (i < n)
  {
    struct node *q;
    q = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for node %d: ", i + 1);
    scanf("%d", &q->data);
    p->next = q;
    q->next = NULL;
    p = p->next;
    i++;
  }

  r = head;

  printf("Given source link lists: \n");

  while (r != NULL)
  {
    printf("%d ", r->data);
    r = r->next;
  }

  while (m != 8)
  {

    printf("\nMENU\n");
    printf("1. Insert\n2. Delete\n3. Count\n4. Traverse\n5. Search\n6. Sort\n7. Reverse\n8. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &m);

    if (m == 1)
    {
      struct node *k, *t;

      t = head;
      int y;

      printf("Enter position to be inserted: ");
      scanf("%d", &y);

      if (y == 1)
        k = t;

      else
      {
        i = 1;
        while (i < y && t != NULL)
        {
          k = t;
          t = t->next;
          i++;
        }
      }

      insert(k, t, head);
      n++;
    }

    else if (m == 2)
    {
      struct node *k, *t, *w;

      t = head;
      int y;

      printf("Enter position to be deleted: ");
      scanf("%d", &y);

      if (y == 1)
      {
        k = t;
      }

      else
      {
        i = 1;
        while (i < y && t != NULL)
        {
          k = t;
          t = t->next;
          i++;
        }
      }
      delete (k, t, head);
      n--;
    }

    else if (m == 3)
    {
      printf("\nThe no. of nodes are: %d\n", n);
    }

    else if (m == 4)
    {
      struct node *g;
      g = head;

      while (g != NULL)
      {
        printf("%d ", g->data);
        g = g->next;
      }
      free(g);
    }

    else if (m == 5)
    {
      int a;

      printf("Enter the element to be searched: ");
      scanf("%d", &a);

      search(a, head);
    }

    else if (m == 6)
    {
      ascend(head);
    }

    else if (m == 7)
    {
      rev(head);
    }

    else if (m == 8)
    {
      return 0;
    }
    
    else
    {
      printf("\nInvalid Input\n");
    }
  }
}