#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};


void insert_at_beg(struct node * head_ref,int new_data)
{
    struct node * new_node = (struct node * )malloc(sizeof(struct node));
    new_node -> data = new_data;
    new_node -> next = (*head_ref);
    (*head_ref) = new_node;
}

void traverse_fd(struct node * Node)
{
    while (node != NULL)
    {
        printf("%d",Node->data);
        Node = Node -> next;
    }
    printf("\n");
}

void backwrd_trvs(struct node * Node)
{
    if (Node == NULL)
    {
        return;
    }
    backwrd_trvs(Node->next);
    printf("%d",Node->data);
}

int main()
{
    struct node * head =NULL;

    insert_at_beg(&head,2);
    insert_at_beg(&head,4);
    insert_at_beg(&head,1);
    insert_at_beg(&head,8);

    traverse_fd(head);

    backwrd_trvs(head);

    return 0;

}