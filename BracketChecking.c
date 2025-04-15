#include <stdio.h>

#define SIZE 5

struct stack {
    int data[SIZE];
    int top;
};

// Function prototypes
void push(struct stack *p, int d);
int pop(struct stack *p);
void display(struct stack s);

int main() {
    struct stack s1, s2;
    int t;

    s1.top = -1;

    // Push elements onto the stack
    push(&s1, 5);
    push(&s1, 1);
    push(&s1, 3);
    push(&s1, 7);
    push(&s1, 11);

    // Display the stack
    display(s1);

    // Pop an element from the stack
    while ((t = pop(&s1)) != -1) {
        printf("Popped: %d\n", t);
    }

    return 0;
}

void push(struct stack *p, int d) {
    if (p->top < SIZE - 1) {
        p->top++;
        p->data[p->top] = d;
    } else {
        printf("Stack is full.\n");
    }
}

int pop(struct stack *p) {
    int d = -1;
    if (p->top == -1) {
        printf("Stack is empty.\n");
    } else {
        d = p->data[p->top];
        p->top--;
    }
    return d;
}

void display(struct stack s) {
    int i;
    if (s.top == -1) {
        printf("Stack is empty.\n");
    } else {
        for (i = s.top; i >= 0; i--) {
            printf("Pushed:%d\n", s.data[i]);
        }
    }
}

