#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    for(int i = 1; i <= 10; printf("%d * %d = %d\n", i, x, i * x), ++i);
}
