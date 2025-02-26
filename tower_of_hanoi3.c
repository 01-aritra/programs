#include <stdio.h>

// Function to define the structure of a stack
struct Stack {
    int capacity; // Maximum capacity of the stack
    int top; // Index of the top element
    char *array; // Array to store the elements
};

// Function to create a new stack
struct Stack *createStack(int capacity) {
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char *)malloc(capacity * sizeof(char));
    return stack;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, char item) {
    if (stack->top == stack->capacity - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack->array[++stack->top] = item;
}

// Function to pop an element from the stack
char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return '\0';
    }
    return stack->array[stack->top--];
}

// Function to perform the iterative Tower of Hanoi algorithm
void towerOfHanoi(int n, char source, char auxiliary, char target) {
    struct Stack *stack = createStack(100); // Create a stack with a capacity of 100
    char temp;
    int i;

    // Push the initial values onto the stack
    push(stack, target);
    push(stack, auxiliary);
    push(stack, source);
    push(stack, n + '0');

    while (!isEmpty(stack)) {
        // Pop the values from the stack
        n = pop(stack) - '0';
        source = pop(stack);
        auxiliary = pop(stack);
        target = pop(stack);

        if (n > 0) {
            // Swap auxiliary and target pegs
            temp = auxiliary;
            auxiliary = target;
            target = temp;

            // Push the values back onto the stack for the next iteration
            push(stack, n - 1 + '0');
            push(stack, auxiliary);
            push(stack, source);
            push(stack, target);
        } else {
            // Move the disk from source to target peg
            printf("Move disk 1 from %c to %c\n", source, target);
        }
    }

    // Free memory allocated for the stack
    free(stack->array);
    free(stack);
}

int main() {
    int n = 3; // Number of disks

    printf("Tower of Hanoi with %d disks:\n", n);
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
