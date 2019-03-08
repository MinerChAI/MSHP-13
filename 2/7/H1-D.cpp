#include <stdio.h>

int main(){
    int n, k;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    scanf("%d", &k);
    for (int i = 0; i < n; ++i) if (array[i] == k) {printf("%d", i + 1); return 0;}
    printf("0");
}
