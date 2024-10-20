#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *createnode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        exit(1);
    }
    newnode->value = data;
    newnode->next = NULL;
    return newnode;
}

struct node *sorted(struct node *head, int data)
{
    struct node *newnode = createnode(data);
    if (head == NULL || data > head->value)
    {
        newnode->next = head;
        return newnode;
    }
    else
    {
        struct node *current = head;
        while (current->next != NULL && data < current->next->value)
        {
            current = current->next;
        }
        newnode->next = current->next;
        current->next = newnode;
        return head;
    }
}

void printlinklist(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
}

int main()
{
    int n, data;
    struct node *head = NULL;
    printf("Enter the number of node: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the data of node %d:", i);
        scanf("%d", &data);
        head = sorted(head, data);
    }
    printf("\nSorted linklist are:");
    printlinklist(head);
}