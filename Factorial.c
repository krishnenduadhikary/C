//Factorial of a given number

#include<stdio.h>

main(){
	int n,result;
	printf("Enter a number:");
	scanf("%d",&n);
	result=fact(n);
	printf("Factorial of %d is %d",n,result);
}

int fact(int n){
	if(n<=1)
	  return 1;
	  
	else
	  return n*fact(n-1);
}
