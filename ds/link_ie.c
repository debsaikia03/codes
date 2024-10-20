#include <stdio.h>
#include<stdlib.h>

struct n1
{
    int data;
    struct n1 *next;
};

int main()
{
    struct n1 *head;
    struct n1 *p, *r, *k, *w,*q;

    p = (struct n1 *)malloc(sizeof(struct n1));

    printf("Enter data for 1 node: ");
    scanf("%d", &p->data);

    p->next = NULL;

    head = p;

    int i=1;
    while(i<10)
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
    
    free(r);

    k =(struct n1*)malloc(sizeof(struct n1));

    printf("\nEnter data for new node: ");
    scanf("%d",&k->data);

    p->next=k;

    k->next=NULL;

    r = head;

    printf("Updated link lists:\n");

    while(r != NULL)
    {
    printf("%d ",r->data);
    r=r->next;
    }

}
    
