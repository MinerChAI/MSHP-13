#include <cstdio>
#include <cmath>

int DigitCount(int k);

int main(){
    int c;
    for (int i = 0; i < 5; ++i){
        scanf("%d", &c);
        printf("%d\n", DigitCount(c));
    }
}

int DigitCount(int k){
    return ceil(log10(k + 1e-3));
}
