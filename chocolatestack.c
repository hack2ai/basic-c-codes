#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

typedef struct {
    int chocolates[MAX_N];
    int top;
} Stack;

void initializeStack(Stack *stack) {
    stack->top = -1;
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

void push(Stack *stack, int chocolates) {
    if (stack->top < MAX_N - 1) {
        stack->top++;
        stack->chocolates[stack->top] = chocolates;
    } else {
        printf("Stack is full, cannot add more chocolates.\n");
    }
}

int pop(Stack *stack) {
    if (!isEmpty(stack)) {
        int chocolates = stack->chocolates[stack->top];
        stack->top--;
        return chocolates;
    } else {
        printf("Stack is empty, cannot sell chocolates.\n");
        return -1;
    }
}

int main() {
    Stack stack;
    initializeStack(&stack);

    int N;
    printf("Enter the number of minutes: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        int choice, chocolates;
        printf("Minute %d:\n", i);
        printf("1. Sell chocolates\n");
        printf("2. Receive chocolates from warehouse\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (!isEmpty(&stack)) {
                chocolates = pop(&stack);
                printf("Sold a box with %d chocolates.\n", chocolates);
            } else {
                printf("No chocolates to sell.\n");
            }
        } else if (choice == 2) {
            printf("Enter the number of chocolates in the box: ");
            scanf("%d", &chocolates);
            push(&stack, chocolates);
            printf("Received a box with %d chocolates from warehouse.\n", chocolates);
        } else {
            printf("Invalid choice.\n");
            i--;  // Decrement the loop variable to repeat the current minute.
        }
    }

    return 0;
}
