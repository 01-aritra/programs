//Using Stack

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Define a structure for stack node
struct StackNode {
    struct TreeNode* treeNode;
    struct StackNode* next;
};

// Function to create a new binary tree node
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}   

// Function to push a tree node onto the stack
void push(struct StackNode** root, struct TreeNode* treeNode) {
    struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    stackNode->treeNode = treeNode;
    stackNode->next = *root;
    *root = stackNode;
}

// Function to check if the stack is empty
int isEmpty(struct StackNode* root) {
    return !root;
}

// Function to pop a tree node from the stack
struct TreeNode* pop(struct StackNode** root) {
    if (isEmpty(*root))
        return NULL;
    struct StackNode* temp = *root;
    *root = (*root)->next;
    struct TreeNode* popped = temp->treeNode;
    free(temp);
    return popped;
}

// Function to perform inversion traversal (inorder) of a binary tree using a stack
void inversionTraversal(struct TreeNode* root) {
    struct TreeNode* current = root;
    struct StackNode* stack = NULL;
    int done = 0;

    while (!done) {
        if (current != NULL) {
            push(&stack, current);
            current = current->right;
        }
        else {
            if (!isEmpty(stack)) {
                current = pop(&stack);
                printf("%d ", current->data);
                current = current->left;
            }
            else
                done = 1;
        }
    }
}

// Example usage
int main() {
    struct TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Inversion (inorder) traversal of binary tree: ");
    inversionTraversal(root);
    printf("\n");

    return 0;
}
