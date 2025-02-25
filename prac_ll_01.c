//   How do you create a linked list node in C++?


#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    Node* next;
};
void insertAtBeginning(struct Node * & head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(struct Node*& head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* lastNode = head;
        while (lastNode->next != nullptr) {
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
    }
}
void deleteNode(struct Node*& head, int value) 
{
    
  struct Node* currentNode = head;
   struct Node* previousNode = nullptr;
    while (currentNode != nullptr && currentNode->data != value) {
        previousNode = currentNode;
        currentNode = currentNode->next;
    }
    if (currentNode != nullptr) {
        if (previousNode == nullptr) {
            head = currentNode->next;
        } else {
            previousNode->next = currentNode->next;
        }
        delete currentNode;
    }
}
void printList(struct Node* head) {
  struct Node* currentNode = head;
    while (currentNode != nullptr) {
        cout << currentNode->data << " ";
        currentNode = currentNode->next;
    }
    cout << endl;
}
int main()
{

}

