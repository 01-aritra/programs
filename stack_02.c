#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack *ptr)   // if the top of the stack is -1 then the stack is empty.
{
   if (ptr -> top == -1)
   {
   return 1;
   }
   else   // it is not mandetory bot only for the begineers
   {
   return 0;
   }
}

int isfull(struct stack *ptr)
{
   if (ptr -> top == ptr->size-1)
   {
   return 1;
   }
   else
   {
   return 0;
}
}


void push (struct stack * ptr,int val)
{
    if (isfull(ptr))
    {
        printf("Stack overflow");
    }
    else
    {
        ptr -> top++;
        ptr -> arr[ptr -> top] =val;

    }
}


int pop (struct stack * ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow");
        return -1;
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
    struct stack *sp = ( struct stack *)malloc (sizeof( struct stack));
    sp -> size =10;
    sp -> top = -1;
    sp -> arr =(int *)malloc(sp->size * sizeof (int));
    printf ("stack has been created successfully  \n");
    printf ("Full before pushing :%d \n", isfull(sp));
    printf ("empty before pushing :%d  \n", isEmpty(sp));
    push(sp,5);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,56);
    push(sp,6);   // ---> popped value
    push(sp,56);
    push(sp,56);
    printf ("Full after pushing :%d \n", isfull(sp));
    printf ("Empty after pushing :%d \n", isEmpty(sp));




    printf("popped %d from the stack \n",pop(sp));

    free(sp);
    return 0;
}
