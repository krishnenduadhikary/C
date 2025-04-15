#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void append(struct Node **h, int d);
void display(struct Node *t);

int main() {
    struct Node *head = NULL;
    append(&head, 2);
    append(&head, 6);
    append(&head, 9);
    append(&head, 15);
    display(head);

    return 0; 
}

void append(struct Node **h, int d) {
    struct Node *q, *t; 
    q = (struct Node *)malloc(sizeof(struct Node));
    q->data = d;
    q->next = NULL;
    if ((*h) == NULL) {
        (*h) = q;
    } else {
        t = (*h);
        while (t->next != NULL)
            t = t->next;
        t->next = q;
    }
}

void display(struct Node *t) {
    while (t) {
        printf("%d ", t->data); 
        t = t->next;
    }
}

