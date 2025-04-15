#include <stdio.h>

#define N 3  

void gauss_jordan(double a[N][N+1]) {
    int i, j, k;
    for (i = 0; i < N; i++) {
        double ratio = a[i][i];
        for (j = 0; j <= N; j++) a[i][j] /= ratio;

        for (j = 0; j < N; j++) 
            if (i != j) 
                for (k = 0, ratio = a[j][i]; k <= N; k++) 
                    a[j][k] -= ratio * a[i][k];
    }
    for (i = 0; i < N; i++) 
        printf("x%d = %.4f\n", i+1, a[i][N]);
}

int main() {
    double a[N][N+1] = {{2, 1, -1, -1}, {1, -2, 3, 9}, {3, -1, 5, 14}};
    gauss_jordan(a);
    return 0;
}
