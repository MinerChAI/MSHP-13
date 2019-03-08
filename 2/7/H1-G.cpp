#include <stdio.h>

int main(){
    int n, a, b, s = 0;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    scanf("%d%d", &a, &b);
    for (int i = a - 1; i < b; ++i) s += array[i];
    printf("%d", s);
}
