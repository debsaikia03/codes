#include <stdio.h>
#include <stdlib.h>

struct n1
{
    struct n1 *prev;
    int data;
    struct n1 *next;
};

int main()
{
    struct n1 *head, *p, *r, *s, *k;

    int n;

    printf("Enter no. of nodes for doubly linked lists: ");
    scanf("%d", &n);

    p = (struct n1 *)malloc(sizeof(struct n1));

    p->prev = NULL;

    printf("Enter data for 1 node: ");
    scanf("%d", &p->data);

    p->next = NULL;

    head = p;

    int i = 1;

    while (i < n)
    {
        struct n1 *q;
        q = (struct n1 *)malloc(sizeof(struct n1));
        printf("Enter data for %d node: ", i + 1);
        scanf("%d", &q->data);
        p->next = q;
        q->prev = p;
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

    s = (struct n1 *)malloc(sizeof(struct n1));

    k = head;
    
    s->next = k;
    k->prev = s;

    head = s ;

    printf("\nEnter data for new node: ");
    scanf("%d", &s->data);

    
    s->prev = NULL;

    r = head;

    printf("\nUpdated doubly linked lists: \n");

    while (r != NULL)
    {
        printf("%d ", r->data);
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
