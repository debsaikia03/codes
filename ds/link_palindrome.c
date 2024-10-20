#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head;
    struct node *p, *r;

    p = (struct node *)malloc(sizeof(struct node));

    printf("Enter data for node 1: ");
    scanf("%d", &p->data);

    p->next = NULL;

    head = p;

    int i = 1;

    while (i < 5) {
        struct node *q;
        q = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &q->data);
        p->next = q;
        q->next = NULL;
        p = p->next;
        i++;
    }

    int c = 0;
    r = head;

    printf("Given source link lists: \n");

    while (r != NULL) {
        printf("%d ", r->data);
        r = r->next;
        c++;
    }

    free(r);

    printf("\nNo. of nodes: %d\n", c);

   int arr[c];


   r = head;

   for (int i = 0; i < c; i++) {
        arr[i] = r->data;
        r = r->next;
    }

    free(r);

    for (int i = 0; i < c; i++) {
        printf("%d ", arr[i]);
    }

    bool isPalin = true;

    for(int i=0, j=c-1; i<j; i++,j--){
        if(arr[i] != arr[j]){
            isPalin = false;
            break;
        }
    }

    if(isPalin){
        printf("\nThe linked list is palindrome.");
    }
    else{
        printf("\nThe linked list is not palindrome.");
    }
   

}
