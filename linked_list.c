#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the beginning of the linked list
struct Node* insertNode(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    return head;
}

// Function to delete a node with the given data from the linked list
struct Node* deleteNode(struct Node* head, int data) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return head;
    }

    struct Node* prev = NULL;
    struct Node* current = head;
    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Node with data %d not found.\n", data);
        return head;
    }

    if (prev == NULL) {
        head = head->next;
    } else {
        prev->next = current->next;
    }

    free(current);
    printf("Node with data %d deleted.\n", data);
    return head;
}

// Function to search for a node with the given data in the linked list
void searchNode(struct Node* head, int data) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct Node* current = head;
    while (current != NULL) {
        if (current->data == data) {
            printf("Node with data %d found.\n", data);
            return;
        }
        current = current->next;
    }

    printf("Node with data %d not found.\n", data);
}

// Function to sort the linked list using bubble sort algorithm
struct Node* sortLinkedList(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    int swapped;
    struct Node* current;
    struct Node* prev = NULL;

    do {
        swapped = 0;
        current = head;

        while (current->next != prev) {
            if (current->data > current->next->data) {
                int temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = 1;
            }

            current = current->next;
        }

        prev = current;
    } while (swapped);

    return head;
}

// Function to traverse and print the linked list
void traverseLinkedList(struct Node* head) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    printf("Linked list: ");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL; // Initialize an empty linked list

    //
// Insert nodes at the beginning of the linked list
head = insertNode(head, 5);
head = insertNode(head, 10);
head = insertNode(head, 15);
head = insertNode(head, 20);
// Traverse and print the linked list
printf("Initial ");
traverseLinkedList(head);

// Search for a node with data 10
searchNode(head, 10);

// Delete a node with data 15
head = deleteNode(head, 15);

// Traverse and print the linked list after deletion
printf("Linked list after deletion: ");
traverseLinkedList(head);

// Sort the linked list
head = sortLinkedList(head);

// Traverse and print the sorted linked list
printf("Sorted ");
traverseLinkedList(head);

// Free memory
struct Node* temp;
while (head != NULL) {
    temp = head;
    head = head->next;
    free(temp);
}

return 0;
}