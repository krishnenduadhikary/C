 // swapping without using temporary variable
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping, the value of a is %d\n", a);
    printf("After swapping, the value of b is %d\n", b);

    return 0;
}
