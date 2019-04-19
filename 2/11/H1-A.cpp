#include <cstdio>
#include <cmath>

int quadratic_solve(double a, double b, double c, double *x1, double *x2);

int main() {
    double a, b, c;
    double ans[2];
    scanf("%f%f%f", &a, &b, &c);
    for (int i = 0; i < quadratic_solve(a, b, c, ans, ans + 1); ++i){
        printf("%0.6f ", ans[i]);
    }
    return 0;
}

int quadratic_solve(double a, double b, double c, double *x1, double *x2){
    int D = b * b - 4 * a * c;
    if (D < 0) return 0;
    *x1 = (-b - sqrt(D)) / 2;
    if (D){
        *x2 = (sqrt(D) - b) / 2;
        return 2;
    }
    return 1;
}
