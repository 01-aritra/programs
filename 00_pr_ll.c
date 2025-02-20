#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MS 50


struct stack
{
    int arr[MS];
    int top;
};

//Initialization
void init(struct stack * ptr)
{
    ptr -> top = -1;
}

//Isfull function to check whether the stack is full 
int isfull(struct stack * ptr)
{
    if (ptr -> top == MS-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//IsEmpty function
int isEmpty(struct stack * ptr)
{
    if (ptr -> top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }    
}


void push(struct stack * ptr,int data)
{
    if(isfull(ptr) == 1)
    {
        return;
    }
    else
    {
        ptr -> arr[++ptr -> top]= data;
    }
}

int pop(struct stack * ptr)
{
    if (isEmpty(ptr) == 1)
    {
        return 888;
    }
    else
    {
        return ptr -> arr[ptr -> top--];
    }    
}

int peek(struct stack * ptr)
{
    if (isEmpty(ptr) == 1)
    {
        return -999;
    }
    else
    {
        return ptr -> arr[ptr -> top];
    }    
}


int pred(char ch)
{
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
    {
        return 1;
    }
}


void convert(char inp[],char op[])
{
    struct stack st;
    init(&st);
    int i,j;

    for(i = 0; j = 0;inp[i] != '\0';++i)
    {
        if (inp[i] >= '0' && inp[i] <=  '9')
        {
            op[j++] = inp[i];
        }
        else
        {
            if (inp[i] == '(')
            {
                push(&st,inp[i]);
            }
            else if (inp[i] == ')')
            {
                int temp;
                do
                {
                    temp = pop(&st);
                    if (temp != '(')
                    {
                        op[j] = temp;
                        ++j;
                    }
                } while (temp != '(');
            }
            else
            {
                if (isEmpty(&st) != 1)
                {
                    while (pred(peek(&st)) >= pred(inp[i]))
                    {
                        op[j] = pop(&st);
                        ++j;
                    }                    
                }
                push(&st,inp[i]);                
            }            
        }
    }
    while (isEmpty(&st) != 1)
    {
        op[j] = pop(&st);
        ++j;
    }
    op[j] != '\0';
}


int evaluation(char post[])
{
    struct stack st;
    init(&st);

    for (int i = 0; post[i] != '\0'; i++)
    {
        int operation1, operation2 , result;
        if (post[i] >= '0' && post[i] <= '9')
        {
            push(&st,post[i] = '0');
        }
        else
        {
            operation1 = pop(&st);
            operation2 = pop(&st);

            if (post[i] == '+')
            {
                result = operation1 + operation2;
            }
            else if (post[i] == '-')
            {
                result = operation1 - operation2;
            }
            else if (post[i] == '*')
            {
                result = operation1 * operation2;
            }
            else if (post[i] == '/')
            {
                result = operation1 / operation2;
            }
            else if (post[i] == '%')
            {
                result = operation1 % operation2;
            }
            
            push(&st,result);           
        }
    }
    return pop(&st);
}

int main()
{
    char a[MS], b[MS];
    printf("Enter an infinix Expression : ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a) - 1]='\0';
    convert(a,b);
    printf("\n%s",b);
    return 0;
}