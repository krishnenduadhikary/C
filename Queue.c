#include <stdio.h>

#define SIZE 5

struct Queue {
    int data[SIZE];
    int front, rear;
};

void insert(struct Queue *t, int d);
int delq(struct Queue *t);
void display(struct Queue q);

int main() {
    struct Queue q;
    q.front = q.rear = 0;
    insert(&q, 5);
    insert(&q, 7);
    insert(&q, 9);
    
    printf("%d ", delq(&q));
    printf("%d ", delq(&q));
    printf("%d ", delq(&q));
    printf("%d ", delq(&q));

    return 0;
}

void insert(struct Queue *t, int d) {
    if (t->rear == SIZE) {
        printf("Queue is full\n");
        return;
    }
    t->data[t->rear] = d;
    t->rear++;
}

void display(struct Queue q){
	int i;
	for(i=q.front;i<q.rear;i++){
		printf("%d",q.data[i]);
	}	
}

int delq(struct Queue *t) {
    int d = -1;
    if (t->front == t->rear) {
        printf("Queue is empty\n");
        return d;
    }
    d = t->data[t->front];
    t->front++;
    if (t->front == t->rear) {
        t->front = t->rear = 0;
    }
    return d;
}

