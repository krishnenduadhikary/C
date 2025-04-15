#include <stdio.h>

int gcd_recursive(int a, int b) {
   if (b == 0) {
      return a;
   } else {
      return gcd_recursive(b, a % b);
   }
}

int main() {
   int a = 45, b = 15;
   printf("GCD of %d and %d is %d\n", a, b, gcd_recursive(a, b));
   return 0;
}
