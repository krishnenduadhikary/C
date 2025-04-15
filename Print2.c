#include<stdio.h>

int main()
{
    int i,j,row,col;
    printf("Enter Row and Column number: ");
    scanf("%d%d",&row,&col);
    for(i=1;i<=row;i++)
    {
      printf("\n");
     for(j=i;j<=col;j++)
     {
      printf("* ");
     }
    }
    return 0;
}