#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node *head=NULL;
    struct node *rear=NULL;

void enqueue(int val){
    struct node* p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL)
    {
        printf("overflow");
    }
    else{
        p->data=val;
        p->next=NULL;
        if(head==NULL){
            head=rear=p;
        }
        else{
        rear->next=p;
        rear=p;
    }
    }
}
int dequeue(){
    struct node *q=head;
    int y=-1;
    if(head==NULL)
    {
        printf("underflow");
    }
    else{
        head=head->next;
        y=q->data;
        
        free(q);
    }
    return y;
}
void print(struct node *head){
    struct node *p=head;
    while(p!=NULL)
    {
        printf("%d \t",p->data);
        p=p->next;
    }

}
void main(){

    enqueue(17);
     enqueue(34);
      enqueue(11);
      print(head);
      printf("element popped =%d",dequeue());
      printf("\n");
      print(head);

}