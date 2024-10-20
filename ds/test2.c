#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void ascend(struct node *h)
{
    struct node *a, *b, *c, *d;
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
    free(r);

    ascend(head);
}