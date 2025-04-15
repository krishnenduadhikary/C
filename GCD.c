//write a Recursive function to calculate the gcd of a number
#include<stdio.h>
int GCD(int a,int b){
	int y=a%b;
	if(y==0)
	  return b;
	else
	  return GCD(b,y); 
}

int main(){
	int a,b,result;
	printf("Enter two number:\n");
	scanf("%d%d",&a,&b);
	result=GCD(a,b);
	printf("GCD OF (%d and %d) is:%d",a,b,result);
}
