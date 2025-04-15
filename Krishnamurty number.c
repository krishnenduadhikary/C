//WAP to check the number Krishnamurty number or not: 
#include <stdio.h>
int main() 
{
  int num1,num2,i,r,fact=1,sum=0;
    printf("Enter an integer number: ");
    scanf("%d", &num1);
    num2=num1;
    while (num2>0)
     {
        r = num2%10;
        fact=1;
      for(i=1;i<=r;i++)
      {
        fact*=i;
    }
       sum+=fact;
       num2/=10;
    }

    if (num1==sum)
        printf("\n%d is a Krishnamurty number ",num1);
    else
        printf("%d is not a Krishnamurty number",num1);

    return 0;
}