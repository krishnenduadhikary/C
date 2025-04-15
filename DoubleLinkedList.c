#include<stdio.h>
#include<stdlib.h>

struct DNode {
    struct DNode *prev;
    int data;
    struct DNode *next;
};

void append(struct DNode **h, int d);
void display(struct DNode *t);
void rdisplay(struct DNode *t);
void addBeg(struct DNode **h, int d);
void addAtPos(struct DNode **h, int d, int pos);

int main() {
    struct DNode *head = NULL;
    append(&head, 5);
    append(&head, 7);
    display(head);
    rdisplay(head);
    addBeg(&head, 3);
    display(head);
    addAtPos(&head, 6, 3);
    display(head);

    return 0;
}

void append(struct DNode **h, int d) {
    struct DNode *q, *t;
    q = (struct DNode *)malloc(sizeof(struct DNode));
    q->data = d;
    q->next = NULL;
    if ((*h) == NULL) {
        *h = q;
        q->prev = NULL;
    } else {
        t = *h;
        while (t->next != NULL) {
            t = t->next;
        }
        t->next = q;
        q->prev = t;
    }
}

void display(struct DNode *t) {
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

void rdisplay(struct DNode *t) {
    while (t->next != NULL)
        t = t->next;
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->prev;
    }
    printf("\n");
}

void addBeg(struct DNode **h, int d) {
    struct DNode *q;
    q = (struct DNode *)malloc(sizeof(struct DNode));
    q->data = d;
    q->next = *h;
    q->prev = NULL;
    (*h)->prev = q; 
    (*h) = q;
}

void addAtPos(struct DNode **h, int d, int pos) {
    struct DNode *t, *q;
    int i;
    t = (*h);
    for (i = 1; i < pos && t != NULL; i++) {
        t = t->next;
    }
    if (t == NULL) {
        printf("ADDITION NOT POSSIBLE\n");
    }
    if (pos == 0) {
        addBeg(h, d);
    } else {
        q = (struct DNode *)malloc(sizeof(struct DNode));
        q->data = d;
        q->next = t->next;
        q->prev = t;
        t->next = q;
        if (q->next != NULL) {
            q->next->prev = q;
        }
    }
}

