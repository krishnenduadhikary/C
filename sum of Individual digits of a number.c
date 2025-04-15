//sum of Individual digits of a number: 
#include<stdio.h>

int main()
{
    int n,r,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    while(n>0)
    {
     r=n%10;
     n=n/10;
     sum+=r;
    }
    printf("/n sum=%d",sum);
    return 0;
}