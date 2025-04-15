#include<stdio.h>

int main()
{
    int i,n,fact=1;
    float sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     fact*=i;
     sum+= (float)i/fact;
    }
    printf("The sum is:%f",sum);
    return 0;
}