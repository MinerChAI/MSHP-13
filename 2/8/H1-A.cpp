#include <stdio.h>

int main(){
    int n, a, s = 0;
    scanf("%d", &n);
    int array[100];
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    scanf("%d", &a);
    for (int i = 0; i < n; ++i) if (array[i] > a) s += array[i];
    printf("%d", s);
}
