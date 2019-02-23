#include <stdio.h>

int DividersSum(unsigned int n);

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) if (i == DividersSum(DividersSum(i)) && i != DividersSum(i) && DividersSum(i) < n) printf("%d %d\n", i, DividersSum(i));
}

int DividersSum(unsigned int n){
    int sum = 0;
    for(int i = 1; i < n; ++i) if (!(n % i)) sum += i;
    return sum;
}
