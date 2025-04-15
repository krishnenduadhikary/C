//pyramid star program 
#include<stdio.h>

int main()
{
    int i,j,row,col;
    printf("Enter Row and Column number: ");
    scanf("%d%d",&row,&col);
    for(i=1;i<=row;i++)
    {
      printf("\n");
     for(j=1;j<=row-i;j++)
     {
      printf(" ");
     }
     for(j=1;j<=i;j++)
     {
      printf("* ");
     }
    }
    return 0;
}