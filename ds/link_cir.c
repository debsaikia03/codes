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
    struct n1 *p, *r;

    p = (struct n1 *)malloc(sizeof(struct n1));

    printf("Enter data for node 1: ");
    scanf("%d", &p->data);

    p->next = NULL;

    head = p;
    
    int i=1;

    while(i<10)
    {
        struct n1 *q;
        q = (struct n1 *)malloc(sizeof(struct n1));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d",&q->data);
        p->next = q;
        q->next = head;
        p = p->next;
        i++;
    }
 
    r = head;

    printf("Given source link lists: \n");

    if(head == NULL)

    return 0;
    
    do
    {
        printf("%d ",r->data);
        r = r->next;
    }while(r != head);

}