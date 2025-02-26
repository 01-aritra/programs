#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int capacity;
    int top;
    int* array;
};

struct Stack* createStack(int capacity) {
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(struct Stack* stack) {
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void push(struct Stack* stack, int item) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack))
        return -1;
    return stack->array[stack->top--];
}

void moveDisk(char fromPeg, char toPeg, int disk) {
    printf("Move disk %d from peg %c to peg %c\n", disk, fromPeg, toPeg);
}

void towerOfHanoi(int numDisks, struct Stack* source, struct Stack* destination, struct Stack* auxiliary) {
    int i, totalMoves;
    char s = 'A', d = 'B', a = 'C';
    if (numDisks % 2 == 0) {
        char temp = d;
        d = a;
        a = temp;
    }
    totalMoves = (1 << numDisks) - 1;
    for (i = numDisks; i >= 1; i--)
        push(source, i);
    for (i = 1; i <= totalMoves; i++) {
        if (i % 3 == 1) {
            if (isEmpty(destination)) {
                push(destination, pop(source));
            } else if (isEmpty(source)) {
                push(source, pop(destination));
            } else if (source->array[source->top] < destination->array[destination->top]) {
                push(destination, pop(source));
            } else {
                push(source, pop(destination));
            }
        } else if (i % 3 == 2) {
            if (isEmpty(auxiliary)) {
                push(auxiliary, pop(source));
            } else if (isEmpty(source)) {
                push(source, pop(auxiliary));
            } else if (source->array[source->top] < auxiliary->array[auxiliary->top]) {
                push(auxiliary, pop(source));
            } else {
                push(source, pop(auxiliary));
            }
        } else {
            if (isEmpty(destination)) {
                push(destination, pop(auxiliary));
            } else if (isEmpty(auxiliary)) {
                push(auxiliary, pop(destination));
            } else if (auxiliary->array[auxiliary->top] < destination->array[destination->top]) {
                push(destination, pop(auxiliary));
            } else {
                push(auxiliary, pop(destination));
            }
        }
        if (i % 1000000 == 0) {
            printf("i: %d, source: %d, auxiliary: %d, destination: %d\n", i, source->array[source->top], auxiliary->array[auxiliary->top], destination->array[destination->top]);
        }
        if (!isEmpty(source
)) {
moveDisk(s, d, source->array[source->top]);
}
if (!isEmpty(destination)) {
moveDisk(s, a, destination->array[destination->top]);
}
if (!isEmpty(auxiliary)) {
moveDisk(a, d, auxiliary->array[auxiliary->top]);
}
}
}

int main() {
  //   printf ("Enter number of discs");
  //   scanf("%d",&numDisks);
int numDisks = 3;
struct Stack* source = createStack(numDisks);
struct Stack* destination = createStack(numDisks);
struct Stack* auxiliary = createStack(numDisks);
towerOfHanoi(numDisks, source, destination, auxiliary);
return 0;
}