//WAP to check the number palindrome or not: 
#include <stdio.h>
int main() {
  int num1,num2,reversed = 0, remainder;
    printf("Enter an integer number: ");
    scanf("%d", &num1);
    num2=num1;
    while (num1>0)
     {
        remainder = num1%10;
        reversed = reversed * 10 + remainder;
        num1=num1/10;
    }

    if (reversed==num2)
        printf("%d is a palindrome number",num2);
    else
        printf("%d is not a palindrome number",num2);

    return 0;
}