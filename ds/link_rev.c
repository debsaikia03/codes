#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *p, *r;

    p = (struct node *)malloc(sizeof(struct node));

    printf("Enter data for 1 node: ");
    scanf("%d", &p->data);

    p->next = NULL;

    head = p;
    
    int i=1;

    while(i<10)
    {
        struct node *q;
        q = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for %d node: ", i + 1);
        scanf("%d",&q->data);
        p->next = q;
        q->next = NULL;
        p = p->next;
        i++;
    }

    r = head;

    printf("Given source link lists: \n");

    while(r != NULL)
    {
        printf("%d ",r->data);
        r = r->next;
    }

    struct node *curr, *next, *prev,*q,*s;

    curr=head;
    next = NULL;
    prev = NULL;
    q=head;
    
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

}

