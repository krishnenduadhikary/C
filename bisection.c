#include <stdio.h>
#include <math.h>

#define TOL 0.0001  // Tolerance level

// Function f(x) = x^3 - x - 1
double f(double x) {
    return x * x * x - x - 1;
}

void bisection(double a, double b) {
    if (f(a) * f(b) >= 0) {
        printf("Invalid interval. Choose different a and b.\n");
        return;
    }

    double mid;
    while ((b - a) / 2 > TOL) {
        mid = (a + b) / 2;
        if (fabs(f(mid)) < TOL) break;
        if (f(a) * f(mid) < 0) b = mid;
        else a = mid;
    }
    
    printf("Root: %.4f\n", mid);
}

int main() {
    double a = 1, b = 2; // Interval where f(a) * f(b) < 0
    bisection(a, b);
    return 0;
}
