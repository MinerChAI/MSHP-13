#include <cstdio>
#include <cmath>
double perimeter(int a, int b, int h);

int main(){
    int a1, a2, b1, b2, h1, h2;
    scanf("%d%d%d%d%d%d", &a1, &b1, &h1, &a2, &b2, &h2);
    printf("%.6f", perimeter(a1, b1, h1) + perimeter(a2, b2, h2));
}

double perimeter(int a, int b, int h){
    return a + b + sqrt(4 * h * h + (a - b) * (a - b));
}
