#include <stdio.h>
#include<stdlib.h>

struct node
{
    long data;
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
    
    long i=1;

    while(i<3)
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

    r = head;

    long n = 0;

    if(head->next == NULL){
       n = head->data;
    }

    else{
    while (r != NULL){
        n = n + r->data;
        n = n * 10;
        r=r->next; 
    }
      n = n/10;
    }

    free(r);

    printf("\n%d",n);

    n = n * 2;

    printf("\n%d",n);

    long c1 = 0;
    long c2 = n;
   
    while(c2 != 0){
        c1++;
        c2 = c2/10;
    }
   
    printf("\n%d\n",c1);
   
    struct node *t, *head1;

    t = (struct node *)malloc(sizeof(struct node));
    t->data = n%10;
    n=n/10;
    t->next = NULL;
    c1--;

    head1 = t;    

    while(c1!=0){
        struct node *q;
        q = (struct node *)malloc(sizeof(struct node));
        q->data = n%10;
        q->next = NULL;
        t->next = q;
        t=t->next;
        n=n/10;
        c1--;       
    }

    struct node *temp1, *temp2;

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

    while(r!=NULL){
        printf("%d ",r->data);
        r=r->next;
    }

}