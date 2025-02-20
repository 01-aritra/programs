#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct Node** head_ref, int new_data) {
    // Allocate memory for new node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    // Assign data to new node
    new_node->data = new_data;
    // Link the old list off the new node
    new_node->next = (*head_ref);
    // Move the head to point to the new node
    (*head_ref) = new_node;
}

// Function to traverse the linked list forward
void forwardTraversal(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Function to traverse the linked list backward recursively
void backwardTraversal(struct Node* node) {
    if (node == NULL) return;
    backwardTraversal(node->next);
    printf("%d ", node->data);
}

int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;

    // Insert elements into the linked list
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    printf("Forward traversal: ");
    forwardTraversal(head);

    printf("Backward traversal: ");
    backwardTraversal(head);

    return 0;
}
