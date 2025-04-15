#include<stdio.h>
#include<math.h>

int main()
{
    int x, i, n;
    printf("Enter integer number: ");
    scanf("%d", &x);
    n = sqrt(x);
    for(i = 2; i <= n; i++)
    {
        if(x % i == 0)
        {
            printf("Given number is not a prime number.\n");
            break;
        }
    }
    if(i > n)
    {
        printf("Given number is a prime number.\n");
    }
    return 0;
}
