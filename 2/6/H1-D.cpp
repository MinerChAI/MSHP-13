#include <stdio.h>
#include <cmath>

bool isPrime(unsigned int n);

int main(){
    int a, b;
    bool empty = true;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; ++i) if (isPrime(i) && i > 99 && i < 1000){
        printf("%d ", i);
        empty = false;
    };
    if (empty) printf("-1");
}

bool isPrime(unsigned int n){
    for(int i = 2; i <= std::sqrt(n); ++i) if (!(n % i)) return false;
    return true;
}
