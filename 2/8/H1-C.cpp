#include <stdio.h>

int main(){
    int n, a, c = 0;
    scanf("%d", &n);
    int array[100];
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    scanf("%d", &a);
    for (int i = 0; i < n - 1; ++i) if (!(array[i] % 2 || array[i + 1] % 2)) ++c;
    printf("%d", c);
}
