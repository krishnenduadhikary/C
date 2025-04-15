#include <stdio.h>

int main() 
{
    int n, i,j;
    int min,pas;
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
      min=arr[i];
      pas=i;
      for(j=i+1;j<n;j++)
      {
        if(min>arr[j])
        {
          min=arr[j];
          pas=j;
        }
      }
      arr[pas]=arr[i];
      arr[i]=min;
    
    }
    printf("Sorted list is:\n");
    for (i = 0; i < n; i++)
   {
    printf("%d ", arr[i]);
   }
 return 0;
}
    