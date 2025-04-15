#include <stdio.h>
#include <math.h>

#define TOL 0.0001  // Tolerance level

// Function f(x) = x^3 + x - 1
double f(double x) {
    return x * x * x + x - 1;
}

void regula_falsi(double a, double b) {
    if (f(a) * f(b) >= 0) {
        printf("Invalid interval. Choose different a and b.\n");
        return;
    }

    double c;
    while (fabs(b - a) > TOL) {
        c = b - (f(b) * (b - a)) / (f(b) - f(a));
        if (fabs(f(c)) < TOL) break;
        if (f(a) * f(c) < 0) b = c;
        else a = c;
    }
    
    printf("Root: %.4f\n", c);
}

int main() {
    double a = 0, b = 1; // Interval where f(a) * f(b) < 0
    regula_falsi(a, b);
    return 0;
}
