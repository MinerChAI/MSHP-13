#include <stdio.h>

int main(){
    int n, x, s = 0;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; ++i) if (!(array[i] % x)) s += array[i];
    printf("%d", s);
}
