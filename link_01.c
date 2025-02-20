#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * next;
};

void linked_listTravaersal(struct node * ptr)
{
    while (ptr != NULL)
    {
         printf("%d ",ptr -> data);
         ptr = ptr -> next;
    }
}
int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;


    head = (struct node * )malloc(sizeof(struct node));
    second = (struct node * )malloc(sizeof(struct node));
    third = (struct node * )malloc(sizeof(struct node));
    fourth = (struct node * )malloc(sizeof(struct node));

    head -> data = 5;
    head -> next = second;

    second -> data = 4;
    second -> next = third;

    third -> data = 3;
    third -> next = fourth;

    fourth -> data = 2;
    fourth -> next = NULL;
    

    linked_listTravaersal(head);
    return 0;
}