#include<stdio.h>
void add(int a,int b);
	main(){
		int a=10,b=20;
		add(a,b);
		add(5,7);
		add(2.5,3.9);
				
	}
		void add(int a,int b){
		int c;
		c=a+b;
		printf("\n%d",c);
	}


