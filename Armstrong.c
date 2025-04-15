//WAP to check the number Armstrong number or not: 
#include <stdio.h>
#include <math.h>
int main() {
  int num1,num2,r,sum=0;
    printf("Enter an integer number: ");
    scanf("%d", &num1);
    num2=num1;
    while (num2>0)
     {
        r = num2%10;
        sum+=pow(r,3);
       num2=num2/10;
    }

    if (sum==num1)
        printf("%d is a Armstrong number",num1);
    else
        printf("%d is not a Armstrong number",num1);

    return 0;
}