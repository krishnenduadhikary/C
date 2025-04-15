#include <stdio.h>
#include <math.h>

#define TOL 0.00001  // Tolerance level

// Function f(x) = x^3 - 2x - 5
double f(double x) {
    return x * x * x - 2 * x - 5;
}

// Derivative f'(x) = 3x^2 - 2
double df(double x) {
    return 3 * x * x - 2;
}

void newton_raphson(double x) {
    double h;
    int iter = 0;

    do {
        h = f(x) / df(x);
        x = x - h;
        iter++;
    } while (fabs(h) > TOL);  // Stop when the change is within tolerance

    printf("Root: %.5f\n", x);
    printf("Iterations: %d\n", iter);
}

int main() {
    double x0 = 2; // Initial guess
    newton_raphson(x0);
    return 0;
}
