#include <stdio.h>

int main(){
    int n, a, c = 0;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    scanf("%d", &a);
    for (int i = 0; i < n; ++i) if (array[i] < a && array[i] >= 0) ++c;
    printf("%d", c);
}
