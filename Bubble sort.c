#include <stdio.h>

int main() 
{
    int n, i,j,t;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
     for(j=0;j<n-i;j++)
      {
        if(arr[j]>arr[j+1])
        {
          t=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=t;
        }
        
      }
    }
    printf("Sorted list is:\n");
    for (i = 0; i < n; i++)
   {
    printf("%d ", arr[i]);
   }
 return 0;
}
    