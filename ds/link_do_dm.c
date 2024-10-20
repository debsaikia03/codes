#include <stdio.h>
#include<stdlib.h>

struct n1
{
    struct n1 *prev;
    int data;
    struct n1 *next;
    
};

int main()
{
    struct n1 *head, *p, *r, *k, *l, *s;

    int n;

    printf("Enter no. of nodes for doubly linked lists: ");
    scanf("%d",&n);

    p = (struct n1 *)malloc(sizeof(struct n1));

    p->prev = NULL;

    printf("Enter data for 1 node: ");
    scanf("%d", &p->data);

    p->next = NULL;

    head = p;
    
    int i=1;

    while(i<n)
    {
        struct n1 *q;
        q = (struct n1 *)malloc(sizeof(struct n1));
        printf("Enter data for %d node: ", i + 1);
        scanf("%d",&q->data);
        p->next = q;
        q->prev = p;
        q->next = NULL;

        p = p->next;
        i++;
    }

    r = head;

    printf("Given source doubly link lists: \n");
    
    while(r != NULL)
    {
        printf("%d ",r->data);
        r = r->next;
    }

    free(r);

    int m;

    printf("\nEnter the position of the node to be deleted: ");
    scanf("%d",&m);

    k = head;

    i = 1;
    while(i<m && k != NULL)
    {
        l = k;
        k = k->next;
        i++;
    }

    s = k->next;

    l->next = k->next;

    s->prev = l;
    
    r = head;

    printf("Updated doubly link lists:\n");

    while(r != NULL)
    {
      printf("%d ",r->data);
      r = r->next;
    }
   
    free(r);

    r = head;

    while(r->next != NULL)
    {
        r=r->next;
    }

    printf("\nChecking doubly linked lists (Reversing):\n");

    while(r != NULL)
    {
      printf("%d ",r->data);
      r = r->prev;
    }

    free(r);

}
