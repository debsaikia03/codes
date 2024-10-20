#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* removeKthFromEnd(struct node* head, int m) {

    int flag = 0;

    if(head->next == NULL){
        return NULL;
    }

    struct node *f, *s1, *s2,*r;
    
    f=s1=s2=r=head;

    int i=1;

    while(i<m){
        f=f->next;
        i++;
    }

    while(f->next != NULL){
        flag = 1;
        f=f->next;
        s1=s2;
        s2=s2->next;
    }

    s1->next=s2->next;

    if(flag == 0){
        head=head->next;
        return head;
    }

    return head;

}

int main(){
    struct node *head;
    struct node *p, *r, *f,*s1, *s2;

    int n;

    printf("Enter no. of nodes: ");
    scanf("%d",&n);

    p=(struct node *)malloc(sizeof(struct node));

    printf("Enter date for node 1: ");
    scanf("%d",&p->data);

    p->next = NULL;

    head = p;

    int i=1;

    while(i<n){
        struct node *q;
        q=(struct node *)malloc(sizeof(struct node));

        printf("Enter data for node %d: ",i+1);
        scanf("%d",&q->data);

        p->next = q;
        q->next = NULL;
        p=p->next;

        i++;
    }

    printf("Given linked list:\n");

    r = head;
    while(r!=NULL){
        printf("%d ",r->data);
        r=r->next;
    }

    int m;

    printf("\nEnter the position of the kth node from the last to be deleted: ");
    scanf("%d",&m);

    head = removeKthFromEnd(head,m);

    r = head;
    while(r!=NULL){
        printf("%d ",r->data);
        r=r->next;
    }  
}


