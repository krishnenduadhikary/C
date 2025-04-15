#include <stdio.h>

int main() {
   int n, i, t1 = 0, t2 = 1,x;
   
   printf("Enter the number of terms: ");
   scanf("%d", &n);

   printf("Fibonacci Series: ");

   for (i = 1; i <= n; i++) {
      printf("%d, ", t1);
      x = t1 + t2;
      t1 = t2;
      t2 = x;
   }

   return 0;
}
