//6. Write a menu driven program to implement binary search and linear search
#include <stdio.h>

// Function for linear search
int linearSearch(int arr[], int n, int key) {
	int i;
    for ( i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}

// Function for binary search (assuming the array is sorted)
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid; // Return the index if key is found
        }

        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Return -1 if key is not found
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);

    int choice, key, result;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Linear Search\n");
        printf("2. Binary Search\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Linear search
                printf("Enter the key to search: ");
                scanf("%d", &key);
                result = linearSearch(arr, n, key);
                if (result != -1) {
                    printf("Key %d found at index %d.\n", key, result);
                } else {
                    printf("Key %d not found in the array.\n", key);
                }
                break;
            case 2:
                // Binary search
                printf("Enter the key to search: ");
                scanf("%d", &key);
                result = binarySearch(arr, 0, n - 1, key);
                if (result != -1) {
                    printf("Key %d found at index %d.\n", key, result);
                } else {
                    printf("Key %d not found in the array.\n", key);
                }
                break;
            case 3:
                // Exit the program
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}

