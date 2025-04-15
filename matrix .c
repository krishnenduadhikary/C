#include <stdio.h>
#define size 10

int main() 
{
    int matrix[size][size];
    int n, i, j, sum = 0;
    
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    
    
    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++)
         {
            scanf("%d", &matrix[i][j]);
         }
    }
    printf("\nGiven matrix is:");
    for(i=0;i<n;i++)
    {
     printf("\n");
     for(j=0;j<n;j++)
     {
      printf("%d \t",matrix[i][j]);
     }
    }
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    printf("\nThe sum of the major diagonal elements is %d\n", sum);
    
    return 0;
}
