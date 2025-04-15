#include <stdio.h>
#include <math.h>
int main() 
{
    int a,b,c;
    float r1,r2,x;
    printf("Enter the values of a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    x=pow(b,2)-4*a*c;
    r1=(-b+sqrt(x))/(2*a);
    r2=(-b-sqrt(x))/(2*a);  
    printf("The roots are: %.2f and %.2f",r1,r2);
    return 0;
}
