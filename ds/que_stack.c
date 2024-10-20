#include <stdio.h>

#define MAX_SIZE 100

struct Stack {
    int arr[MAX_SIZE];
    int top;
};

void push(struct Stack* stack, int x) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }

    stack->arr[++stack->top] = x;
}

void pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack is empty\n");
        return;
    }

    stack->top--;
}

int top(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack is empty\n");
        return -1;
    }

    return stack->arr[stack->top];
}

int size(struct Stack* stack) {
    return stack->top + 1;
}

int main() 
{
    struct Stack s;
    s.top = -1;

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);

    printf("current size: %d\n", size(&s));
    printf("%d\n", top(&s));
    pop(&s);
    printf("%d\n", top(&s));
    pop(&s);
    printf("%d\n", top(&s));

    printf("current size: %d\n", size(&s));

    return 0;
}
