// Without using stack 
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary tree node
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new binary tree node
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to perform inversion traversal (inorder) of a binary tree without using a stack
void inversionTraversal(struct TreeNode* root) {
    struct TreeNode* current = root;

    while (current != NULL) {
        if (current->right == NULL) {
            printf("%d ", current->data);
            current = current->left;
        }
        else {
            struct TreeNode* successor = current->right;
            while (successor->left != NULL && successor->left != current)
                successor = successor->left;

            if (successor->left == NULL) {
                successor->left = current;
                current = current->right;
            }
            else {
                successor->left = NULL;
                printf("%d ", current->data);
                current = current->left;
            }
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
