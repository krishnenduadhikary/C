//Modify factorial program
#include<stdio.h>
int fact(int n,int f){
	if(n<=1)
	  return 1;
	else
	  return fact(n-1,f*n);
}
main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("%d",fact(n,1));
}
