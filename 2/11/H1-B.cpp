#include <cstdio>

int gcd(int a, int b);
void reduce_fraction(int *n, int *m);

int main(){
    int* a, b;
    scanf("%d%d", a, b);
    reduce_fraction(a, b);
    printf("%d %d", *a, *b);
}

int gcd(int a, int b){return b ? a : gcd(b, a % b);}

void reduce_fraction(int *n, int *m){
    int d = gcd(*n, *m);
    *n /= d;
    *m /= d;
}
