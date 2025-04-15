#include <stdio.h>

int main() 
{
    int n, i, srch;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        
    }
    printf("Enter the Element to be searched:");
    scanf("%d",&srch);
    for(i=0;i<n;i++)
    {
      if(arr[i]==srch)
      {
       printf("%d is found at %d position.",srch,i+1);
       break;
      }
      else if(i==n)
      printf("%d is not found.");
    }

    return 0;
}
