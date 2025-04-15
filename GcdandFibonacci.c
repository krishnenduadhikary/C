//7. Write a menu driven program i) GCD of two numbers use recursion ii) Fibonacci senes using recursion
#include <stdio.h>

// Function to find the GCD of two numbers using recursion
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return findGCD(b, a % b);
    }
}

// Function to generate the nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int choice, num1, num2, result,i, n;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Find GCD of two numbers using recursion\n");
        printf("2. Generate Fibonacci series using recursion\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // GCD of two numbers using recursion
                printf("Enter two numbers to find their GCD: ");
                scanf("%d %d", &num1, &num2);
                result = findGCD(num1, num2);
                printf("GCD of %d and %d is %d.\n", num1, num2, result);
                break;
            case 2:
                // Fibonacci series using recursion
                printf("Enter the number of terms in the Fibonacci series: ");
                scanf("%d", &n);
                printf("Fibonacci series: ");
                for ( i = 0; i < n; i++) {
                    printf("%d ", fibonacci(i));
                }
                printf("\n");
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

