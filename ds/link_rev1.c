#include <stdio.h>
#include<stdlib.h>



struct node
{
    int data;
    struct node *next;
};

void printrev(struct node* head)
{
    struct node* p = head;
    if(p!=NULL)
    {
     printrev(p->next);
     printf("%d",p->data);
    }
}

int main()
{
    struct node *p , *w;
    struct node *head;
    int a,i=1;
    printf("Enter the size of linked list");
    scanf("%d",&a);
    if(a==0){
        return 0;
        }

    else{
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of 0 node");
    scanf("%d", &p->data);
    p->next = NULL;
    head = p;}

     while(a-1)
    {
        
        struct node *q;
        q = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data of %d node", i);
        scanf("%d",&q->data);

        p->next= q;
        q->next = NULL;
        p = p->next;
        i++;
        a--;

       
    }
    
    w=head;
    while(w!=NULL){
        
        printf("%d",w->data);
        w = w->next;
        
    }
    printf("\n");

    printrev(head);
}