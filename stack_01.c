#include<stdio.h>
#include<stdlib.h>

struct stack {
   int size;
   int top;
   int * arr;
   };


int isEmpty(struct stack *ptr)   // if the top of the stack is -1 then the stack is empty.
{
   if (ptr -> top == -1)
   {
   return -1;
   }
   else   // it is not mandetory bot only for the begineers
   {
   return 0;
   }
}

int isfull(struct stack *ptr)
{
   if (ptr -> top == ptr->size-1)
   return -1;
   else
   return 0;
}
   int main()
   {
// struct stack s;
// s.size = 80;
// s.top = -1;
// s.arr = (int *)malloc (s.size*sizeof(int));
//     return 0;


 /*  *it is  a pointer now*   */
  
  
   struct stack * s;
s->size = 80;
s->top = -1;
s->arr = (int *)malloc (s->size*sizeof(int));
    
  
   // pushing an element manually.
s->arr[0] =4;
s->top++;

   // check if the stack is empty.

if (isEmpty(s))
{
   printf("Ther Stack is Empty \n");
   }
   else
   {
      printf("Ther stack is not empty \n");
      printf("The Element is %p \n",s);
      printf("The Element is %d \n",s);
   }
 

   if (isfull(s))
{
   printf("Ther Stack is Full\n");
   }
   else
   {
      printf("Ther stack is not full \n");
   }
   return 0;
   }


