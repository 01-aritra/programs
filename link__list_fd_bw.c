#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

// function to create a node 
struct Node * newNode(int data)
{
    struct Node * createnode = (struct Node*)malloc(sizeof(struct Node));
    createnode -> data = data;
    data -> next = NULL;
    return createnode;
}

//function to insert a node
void insertnode(struct Node ** head,int data)
{
    struct Node * newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode -> next = NULL;

    if (*head == NULL)
    {
        *head=newNode;
        return;
    }

    struct Node * temp = *head;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }

    temp -> next = newNode;
}