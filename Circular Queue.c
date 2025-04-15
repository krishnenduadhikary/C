//create a circular Queue

#include<stdio.h>
#define SIZE 5
void insert(struct cQueue *t,int d);
void delq(struct cQueue *t);

struct cQueue{
	int data[SIZE];
	int front,rear;
};

main(){
	int k;
	struct cQueue q;
	q.front=SIZE-1;
	q.rear=0;
	
	insert(&q,5);
	insert(&q,7);
	insert(&q,9);
	
	k=delq(&q);
	
	printf("%d",del(&q));
	printf("%d",del(&q));
	printf("%d",del(&q));
	printf("%d",del(&q));
}

void insert(struct cQueue *t,int d){
	if(t->rear==t->front){
		printf("Queue is full.");
	}
	else{
		t->data[t->rear]=d;
		t->rear=(t->rear+1)%SIZE;
	}
}

int delq(struct cQueue *t){
	int d=-1;
	if((t->front+1)/SIZE==t->rear){
		printf("Queue is empty");
		return d;
	}
	t->front=(t->front+1)%SIZE;
	d=t->data[t->front];
	return d;
}
