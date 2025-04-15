#include <stdio.h>
#define SIZE 5

struct stack {
    int data[SIZE];
    int top;
};

void push(struct stack *p, int d);
void display(struct stack s);

int main() {
    struct stack s1;
    s1.top = -1;
    int i, n,k;
    printf("Enter integers in the stack:\n");
    
    for (i = 0; i < SIZE; i++) {
    	printf("Pushed:") ;
        scanf("%d", &n);
        push(&s1, n);
    }
    
    display(s1);
    
     for (i = SIZE; i>=0;i--) {
        k=pop(&s1);
        printf("\nPopped: %d",k);
    }
    
    return 0;
}

void push(struct stack *p, int d) {
    if (p->top == SIZE-1) {
        printf("Stack is full.\n");
    } else {
        p->top++;
        p->data[p->top] = d;
    }
}

void display(struct stack s) {
	int i;
    for (i = s.top; i >= 0; i--) {
        printf("Display:%d\n", s.data[i]);
    }
}

int pop(struct stack *p){
	int d=-1;
	if(p->top==d){
		printf("\nstack is empty.");
		return d;
	}
	d=p->data[p->top];
	p->top--;
	return d;
}

