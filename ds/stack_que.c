#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Stack {
    struct Node* q1;
    struct Node* q2;
};

void enqueue(struct Node** front, struct Node** rear, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*rear == NULL) {
        *front = *rear = newNode;
    } else {
        (*rear)->next = newNode;
        *rear = newNode;
    }
}

int dequeue(struct Node** front, struct Node** rear) {
    if (*front == NULL) {
        return -1; 
    }

    int value = (*front)->data;
    struct Node* temp = *front;

    *front = (*front)->next;

    if (*front == NULL) {
        *rear = NULL;
    }

    free(temp);

    return value;
}

void push(struct Stack* stack, int x) {
    enqueue(&(stack->q2), &(stack->q2), x);

    while (stack->q1 != NULL) {
        enqueue(&(stack->q2), &(stack->q2), dequeue(&(stack->q1), &(stack->q1)));
    }

    struct Node* temp = stack->q1;
    stack->q1 = stack->q2;
    stack->q2 = temp;
}

void pop(struct Stack* stack) 
{
    if (stack->q1 == NULL) {
        return;
    }
    dequeue(&(stack->q1), &(stack->q1));
}

int top(struct Stack* stack) {
    if (stack->q1 == NULL) {
        return -1; 
    }
    return stack->q1->data;
}

int size(struct Stack* stack) {
    struct Node* temp = stack->q1;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    struct Stack stack;
    stack.q1 = stack.q2 = NULL;

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("current size: %d\n", size(&stack));
    printf("%d\n", top(&stack));
    pop(&stack);
    printf("%d\n", top(&stack));
    pop(&stack);
    printf("%d\n", top(&stack));

    printf("current size: %d\n", size(&stack));

    return 0;
}
