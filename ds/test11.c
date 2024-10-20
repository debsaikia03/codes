#include <stdio.h>
#include<stdlib.h>

struct n1
{
    int data;
    struct n1 *next;
};

int main()
{
    struct node *head;
    struct n1 *p, *r, *f, *s, *k;

    int n;

    printf("Enter no. of nodes: ");
    scanf("%d",&n);

    p = (struct n1 *)malloc(sizeof(struct n1));

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

    f = head;
    s= head;

    while(f->next != NULL && f->next->next != NULL)
    { 
        f= f->next->next;
        s=s->next;
    }

    k= s->next;

    if(n%2 != 0)

    printf("\nThe middle node is: %d",s->data);

    else

    printf("\nThe middle nodes are: %d %d",s->data,k->data);

}