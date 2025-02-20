#include<iostream>
using namespace std;

// creating a class node
class node
{
    public:
    int val;
    node * next;

    node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insertAthead(node * &head,int val)
{
    node * new_Node = new node(val);
    new_Node -> next = head;
    head = new_Node;
}

void insertAt_end(node * &head,int val)
{
    node * newNode = new node(val);
    node * temp = head;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }
    temp -> next = newNode;
}

/*  insert at any position ...
void insertNodeAtanyPos(node * &head,int val,int pos)
{
    if (pos == 0)
    {
        insertAthead(head,val);
        return;
    }
    node * new_node = new Node(val);
    int current_pos = 0;
    
      
    
}
*/


void display(node * head)
{
    node * temp = head;
    while (temp != NULL)
    {
        cout << temp -> val << " -> ";
        temp = temp -> next;
    }
    cout << "NULL";    
}

int main()
{
    node * head = NULL;
    insertAthead(head,2);
    insertAthead(head,3);
    insertAthead(head,4);
    display(head);
    printf("\n");
    insertAt_end(head,1);
    display(head);
    return 0;
}