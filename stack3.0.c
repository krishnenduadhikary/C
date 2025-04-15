//creating a stack
#include<stdio.h>
#define SIZE 10
void push(int p);
int pop();
void display();
main(){
	int stack[SIZE];
	int top=-1;
	int n,x;
	printf("***Stack Program***");
	printf("Choose an option---");
	printf("1.PUSH \n2.POP \n3.Display \n4.Exit.");

	scanf("%d",&n);
	switch(n)
	{ 
	   case 1: printf("Enter an element:");
				scanf("%d",&x);
				push(x);
				printf("pushed:",x);
				break;
	   case 2:  int r=pop();
	   		    printf("popped:%d",r);
	   			break;
	   case 3: display();
	   			break;
	   case 4: printf("Existing....");
	   
	   default: printf("Invalid Choice.");
	}
void push(int p)
{
	if(top==SIZE-1)
	  printf("Stack is full.");
	else{
	  top=top+1;
	  stack[top]=p;
	  }
}
int pop()
{
	int q = -1;
    if(top == -1) {
        printf("Stack is empty.\n");
    } else {
        q=stack[top];
        top=top-1;
    }
    return q;
}
void display()
{ 
	if(top == -1) {
        printf("Stack is empty.\n");
    }
    else if(top==SIZE-1){
	     printf("Stack is full.");
	     }
	else{
	int i;
	for(i=top;i>=0;i--){
		printf(stack[i]);
	} 
	}
}	
}
