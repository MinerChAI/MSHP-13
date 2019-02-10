#include <stdio.h>
#include <cmath>

int main(){
    int n;
    scanf("%d", &n);
    //printf("%d\n", n);
    printf("%0.6f", 10 * std::pow(1.1, n - 1));
}
