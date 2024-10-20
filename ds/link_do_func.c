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
    struct n1 *head, *p, *r, *s, *k, *l;

    int n;

    printf("Enter no. of nodes for doubly linked lists: ");
    scanf("%d",&n);

    p = (struct n1 *)malloc(sizeof(struct n1));

    p->prev = NULL;

    printf("Enter data for node 1: ");
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

    s = (struct n1*)malloc(sizeof(struct n1));

    int m;

    printf("\nEnter the position for the new node to be inserted: ");
    scanf("%d",&m);

    s->prev = NULL;

    printf("Enter data for new node: ");
    scanf("%d",&s->data);

    s->next = NULL;

    l = head;

    i = 1;
    while(i<m && l != NULL)
    {
        k = l;
        l = l->next;
        i++;
    }

    k->next = s;
    s->prev = k;
    s->next = l;
    l->prev = s;

    r = head;

    printf("\nUpdated doubly linked lists:\n");

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
    



    


