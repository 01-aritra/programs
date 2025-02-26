// stack to pointer practice

#include<stdio.h>
#include<stdlib.h>


struct stack{
    int size;
    int top;
    int *arr;
};
int is_empty(struct stack *ptr)
{
    if(ptr->top == -1)
    return -1;
}
int is_full(struct stack *ptr)
{
    if(ptr -> top == ptr -> size-1)
    return -1;
}
int main()
{
    struct stack *s;
    s->size = 5;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    // s->arr[0]=3;
    // s->arr[1]=4;
    // s->arr[2]=9;
    // s->arr[3]=6;
    // s->arr[4]=54;
    // s->arr[5]=90;
    // s->top++;
    if(is_empty(s))
    {
        printf("Stack is empty \n");
    }
    else 
    {
        printf("The stack is not empty\n");
    }
    if (is_full(s))
    {
         
        printf("Stack is full ");
    }
    else 
    {
        printf("The stack is not full");
    }
    return 0;
    }

