#include <stdio.h>
#include <stdlib.h>

// Define a structure for the node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning
struct Node* insertAtBeginning(struct Node* last, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;

    if (last == NULL) {
        // If the list is empty, make the new node as the only node
        new_node->next = new_node;
        last = new_node;
    } else {
        // If the list is not empty, insert the new node at the beginning
        new_node->next = last->next;
        last->next = new_node;
    }

    return last;
}

// Function to display the circular linked list
void displayList(struct Node* last) {
    struct Node* temp;

    if (last == NULL) {
        printf("The list is empty.\n");
        return;
    }

    temp = last->next;

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next);

    printf("\n");
}

int main() {
    struct Node* last = NULL;

    // Insert nodes at the beginning
    last = insertAtBeginning(last, 3);
    last = insertAtBeginning(last, 2);
    last = insertAtBeginning(last, 1);

    // Display the circular linked list
    printf("Circular Linked List: ");
    displayList(last);

    return 0;
}
