#include <stdio.h>

int main() 
{
    int n, i, srch;
    int beg, mid, end;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in ascending order:\n", n);

    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &srch);

    beg = 0;
    end = n - 1;

    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (srch == arr[mid])
        {
            printf("%d is found at position %d.\n", srch, mid + 1);
            break;
        }
        else if (srch > arr[mid])
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (beg > end)
    {
        printf("%d is not found in the array.\n", srch);
    }

    return 0;
}
    