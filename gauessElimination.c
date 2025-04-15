#include <stdio.h>

#define N 3  

void gauss_elimination(double a[N][N+1]) {
    int i, j, k;
    double x[N], ratio;

    for (i = 0; i < N - 1; i++)  
        for (j = i + 1; j < N; j++) {  
            ratio = a[j][i] / a[i][i];  
            for (k = 0; k <= N; k++)  
                a[j][k] -= ratio * a[i][k];  
        }

    for (i = N - 1; i >= 0; i--) {  
        x[i] = a[i][N];  
        for (j = i + 1; j < N; j++)  
            x[i] -= a[i][j] * x[j];  
        x[i] /= a[i][i];  
    }

    for (i = 0; i < N; i++)  
        printf("x%d = %.4f\n", i+1, x[i]);  
}

int main() {
    double a[N][N+1] = {{2, 1, -1, -1}, {1, -2, 3, 9}, {3, -1, 5, 14}};
    gauss_elimination(a);
    return 0;
}
