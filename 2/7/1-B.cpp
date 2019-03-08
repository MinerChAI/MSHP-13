#include <stdio.h>

int main(){
    int n, k;
    scanf("%d", &n);
    int array[100] = {};
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    scanf("%d", &k);
    printf(array[k - 1] % 2 ? "NO" : "YES");
}
