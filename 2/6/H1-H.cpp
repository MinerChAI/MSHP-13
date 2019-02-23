#include <stdio.h>
#include <cmath>

bool isPrime(unsigned int n);

int main(){
    int n;
    scanf("%d", &n);
    for (int i = std::pow(10, n - 1); i < std::pow(10, n); ++i) if(isPrime(i)) printf("%d\n", i);
}

bool isPrime(unsigned int n){
    if (n == 1) return false;
    for(int i = 2; i <= std::sqrt(n); ++i) if (!(n % i)) return false;
    return true;
}
