#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE], top = -1;

void push();
void pop();
void show();

int main() {
    int choice,n;

    printf("Enter the number of elements in stack (up to %d): ", MAX_SIZE);
    scanf("%d", &n);

    printf("*STACK OPERATIONS USING ARRAY");
    printf("\n--------------\n");

    do {
        printf("\nChoose one from the below options...\n");
        printf("1. Push\n2. Pop\n3. Show\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Please choose a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

void push() {
    int item;

    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow! Cannot push element.\n");
        return;
    }

    printf("Enter the element to push: ");
    scanf("%d", &item);

    stack[++top] = item;
    printf("Element %d pushed to the stack.\n", item);
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop element.\n");
        return;
    }

    printf("Element %d popped from the stack.\n", stack[top--]);
}

void show() {
	int i;
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Elements in the stack: ");
    for (i = 0; i <= top; ++i) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

