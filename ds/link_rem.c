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

    printf("Enter data for node 1: ");
    scanf("%d", &p->data);

    p->next = NULL;

    head = p;
    
    int i=1;

    while(i<5)
    {
        struct node *q;
        q = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i + 1);
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

    int n = 0;
    
    r = head;

    while(r!=NULL){
        n++;
        r=r->next;
    }  

    free(r);

    printf("\n%d\n",n);

    struct node *temp1, *temp2;

    temp1=NULL;
    temp2=NULL;

    while(head != NULL)
    { 
        temp2 = head->next;
        head->next = temp1;
        temp1=head;
        head=temp2;
    }

    head=temp1;

    free(temp1);
    free(temp2);

    r = head;

    while(r != NULL)
    {
        printf("%d ",r->data);
        r = r->next;
    }
    
    free(r);

    
    r = (struct node *)malloc(sizeof(struct node));

    r->data = head->data;

    r->next = NULL;
    head = head->next;

    struct node *head1;
    head1 = r;

    int temp = -1;

    while(head != NULL){
        
        if(temp <= head->data){
            struct node *q;
            q = (struct node *)malloc(sizeof(struct node));
            q->data = head->data;
            r->next = q;
            q->next = NULL;
            r=r->next;
        }    
        head = head->next; 
    }


    free(r);
    
    temp1=NULL;
    temp2=NULL;

    while(head1 != NULL)
    { 
        temp2 = head1->next;
        head1->next = temp1;
        temp1=head1;
        head1=temp2;
    }

    head1=temp1;
 
    r = head1;

    while(r != NULL)
    {
        printf("%d ",r->data);
        r = r->next;
    }


}