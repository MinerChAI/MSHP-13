#include <stdio.h>

int main(){
    int n, p, x;
    int array[101];
    scanf("%d", &n)
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    scanf("%d%d", x, p);
    for (int i = n - 1; i >= p - 1; array[i] = array[--i]);
    for (int i = 0; i < n; printf("%d ", array[i++]));
}
