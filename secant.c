#include <stdio.h>
#include <math.h>

#define TOL 0.00001  // Tolerance level

// Function f(x) = x^3 - 2x - 5
double f(double x) {
    return x * x * x - 2 * x - 5;
}

void secant(double x0, double x1) {
    double x2;
    int iter = 0;

    do {
        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));  // Secant formula
        x0 = x1;
        x1 = x2;
        iter++;
    } while (fabs(f(x2)) > TOL);  // Stop when the function value is within tolerance

    printf("Root: %.5f\n", x2);
    printf("Iterations: %d\n", iter);
}

int main() {
    double x0 = 2, x1 = 3; // Initial guesses
    secant(x0, x1);
    return 0;
}
