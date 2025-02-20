// Implementing stack using linked list 

#include <stdio.h>
#include <stdlib.h>

// Definition of a linked list node
struct Node {
    int data;               // Data in the node
    struct Node* next;     // Pointer to the next node
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to push an element onto the stack
struct Node* push(struct Node* top, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = top;
    return newNode;
}

// Function to pop an element from the stack
struct Node* pop(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return NULL;
    }
    struct Node* temp = top;
    top = top->next;
    printf("Popped element: %d\n", temp->data);
    free(temp);
    return top;
}

// Function to peek at the top element of the stack
void peek(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", top->data);
    }
}

// Function to check if the stack is empty
int isEmpty(struct Node* top) {
    return top == NULL;
}

int main() {
    // Creating an empty stack
    struct Node* top = NULL;

    // Pushing elements onto the stack
    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);

    // Popping elements from the stack
    top = pop(top);
    top = pop(top);

    // Peeking at the top element
    peek(top);

    // Checking if the stack is empty
    if (isEmpty(top)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    return 0;
}
