#include <stdio.h>
#include <string.h>
#define MS 50

struct stack
{
    int arr[MS];
    int top;
};

//init function
void init(struct stack *pts)
{
    pts->top = -1;
}

//isfull function
int isfull(struct stack *pts)
{
    if (pts->top == MS - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//isempty function
int isempty(struct stack *pts)
{
    if (pts->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


//push function
void push(struct stack *pts, int value)
{
    if (isfull(pts) == 1)
    {
        return;
    }
    else
    {
        // ++(pts->top);
        pts->arr[++pts->top] = value;
    }
}

//pop function
int pop(struct stack *pts)
{
    if (isempty(pts) == 1)
    {
        return 888;
    }
    else
    {
        return pts->arr[pts->top--];
    }
}

//peek function
int peek(struct stack *pts)
{
    if (isempty(pts) == 1)
    {
        return -999;
    }
    else
    {
        return pts->arr[pts->top];
    }
}

// PRECIDENCE
int pred(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 1;
}

//convert function
void convert(char inp[], char op[])
{
    struct stack st;
    init(&st);
    int i, j;

    for (i = 0, j = 0; inp[i] != '\0'; ++i)
    {
        if (inp[i] >= '0' && inp[i] <= '9')
        {
            op[j++] = inp[i];
        }
        else
        {
            if (inp[i] == '(')
            {
                push(&st, inp[i]);
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
                if (isempty(&st) != 1)
                {
                    while (pred(peek(&st)) >= pred(inp[i]))
                    {
                        op[j] = pop(&st);
                        ++j;
                    }
                }
                push(&st, inp[i]);
            }
        }
    }

    while (isempty(&st) != 1)
    {
        op[j] = pop(&st);
        ++j;
    }
    op[j] = '\0';
}

//evaluate function
int evaluation(char post[])
{
    struct stack st;
    init(&st);

    for (int i = 0; post[i] != '\0'; ++i)
    {

        int operation1, operation2, result;
        if (post[i] >= '0' && post[i] <= '9')
        {
            push(&st, post[i] - '0');
        }
        else
        {
            operation2 = pop(&st);
            operation1 = pop(&st);
            if (post[i] == '+')
                result = operation1 + operation2;
            else if (post[i] == '-')
                result = operation1 - operation2;
            else if (post[i] == '*')
                result = operation1 * operation2;
            else if (post[i] == '/')
                result = operation1 / operation2;
            else if (post[i] == '%')
                result = operation1 % operation2;

            push(&st, result);
        }
    }
    return pop(&st);
}

int main()
{
    char a[MS], b[MS];
    printf("Enter an infix expression : ");
    fgets(a, sizeof(a), stdin);
    a[strlen(a) - 1] = '\0';
    convert(a, b);
    printf("\n%s", b);

    return 0;
}