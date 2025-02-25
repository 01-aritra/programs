#include<stdio.h>
#include<string.h>
#define MS 50

struct stack
{
    int arr[MS];
    int top;
};
void init(struct stack *pts)
{
    pts->top = -1;
}
