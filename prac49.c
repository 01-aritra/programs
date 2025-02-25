// linked list isfull , isempty,

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    int top;
    int * arr;  
};

int isEmpty(struct stack * ptr)
{
    if (ptr -> top == -1)
    {
        return -1;
    }
    else 
    {
        return 0;
    }    
}

int isFull(struct stack * ptr)
{
    if (ptr -> top == ptr -> size-1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack * ptr,int val)
{
    if (isFull(ptr))
    {
        printf("Stack is full");
    }
    else
    {
        ptr -> top++;
        ptr -> arr[ptr -> top]=val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is Empty.");
    }
    else
    {
        int val = ptr -> arr[ptr -> top];
        ptr -> top--;
        return val;
    }
}

int main()
{
    struct stack * sp =(struct stack *)malloc(sizeof(struct stack));
    sp -> size = 10;
    sp -> top = -1;
    sp -> arr =(struct stack *)malloc(sp -> size * sizeof(int));
}
