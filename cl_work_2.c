#include <stdio.h>

#define MAX_SIZE 10

typedef struct {
    int stack[MAX_SIZE];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

void push(Stack *s, int item) {
    if (s->top < MAX_SIZE - 1) {
        s->top++;
        s->stack[s->top] = item;
    } else {
        printf("Error: Stack is full\n");
    }
}

int pop(Stack *s) {
    if (s->top >= 0) {
        int item = s->stack[s->top];
        s->top--;
        return item;
    } else {
        printf("Error: Stack is empty\n");
        return -1; // assuming -1 as an invalid item
    }
}

int isfull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

int isempty(Stack *s) {
    return s->top == -1;
}
