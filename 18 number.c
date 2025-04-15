#include<stdio.h>
int main()
{
  int n,a,b,c;
  printf("Enter an three digit number: "); 
  scanf("%d",&n);
  a=n/100;
  b=(n%100)/10;
  c=n%10;
  if(a+c==b)
  printf("True");
  else
     printf("False");
    
  return 0;
}