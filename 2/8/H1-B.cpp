#include <stdio.h>

int main(){
    int n, a, s = 0;
    scanf("%d", &n);
    int array[100];
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    scanf("%d", &a);
    for (int i = 0; i < n; ++i)  s += array[i] * array[i];
    printf((s >= 10000 && s < 100000)? "YES" : "NO");
}
