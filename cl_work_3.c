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

int main() {
    Stack my_stack;
    init(&my_stack);

    // Push items onto the stack
    push(&my_stack, 1);
    push(&my_stack, 2);
    push(&my_stack, 3);

    // Pop items from the stack
    printf("%d\n", pop(&my_stack));  // Output: 3
    printf("%d\n", pop(&my_stack));  // Output: 2

    // Check if the stack is full or empty
    printf("%d\n", isfull(&my_stack));   // Output: 0 (False)
    printf("%d\n", isempty(&my_stack));  // Output: 0 (False)

    return 0;
}
