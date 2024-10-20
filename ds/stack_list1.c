#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node *head=NULL;
void push(int data){
    struct node* p=(struct node*)malloc(sizeof(struct node));
    if(p==NULL){
        printf("stack overflow\n ");
    }
    else{
        p->data=data;
        p->next=head;
        head=p;
        }
}

void pop(){
    if(head==NULL){
        printf("stack underflow \n");
    }
    else{
        int y=head->data;
        printf("\n element poppped=%d",y);
        head=head->next;
        }
 
}

void print(struct node* head){
    struct node* p;
    p = head;
    printf("\n");
    while(p!=NULL){
        printf("%d   ",p->data);
        p=p->next;
    }
    
}

void main(){
    push(1);
    push(2);
    push(3);
    print(head);
    pop();
    print(head);
}