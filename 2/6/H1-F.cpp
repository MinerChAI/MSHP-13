#include <stdio.h>

int main(){
    int n, c = 0;
    scanf("%d", &n);
    for (int c10 = n / 10; c10 >= 0; --c10) for (int c5 = (n - c10 * 10) / 5; c5 >= 0; --c5) for (int c2 = (n - 10 * c10 - 5 * c5) / 2; c2 >= 0; --c2, ++c);
    printf("%d", c);


}
