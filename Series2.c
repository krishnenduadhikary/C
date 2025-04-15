#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,x,fact=1;
    float sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     x=pow(i,i);
     fact*=i;
     sum+=(float)x/fact;
    }
    printf("The sum is:%f",sum);
    return 0;
}