#include <stdio.h>

int main(){
    int n, c, sum = 0, mult = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &c);
        sum += c;
        mult *= c;
    }
    printf("%d %d", sum, mult);
}
