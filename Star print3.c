//star print 3
#include <stdio.h>
int main() 
{
  int i,j,k,n;
    printf("Enter no of rows: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
     for(j=i;j<n-1;j++)
     {
       printf(" ");
     }
     for(k=0;k<=i;k++)
     {
      printf("*");
     }
     printf("\n");
    }
    return 0;
}