#include <stdio.h>

int main(){
    int n, k, _ = 0;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    scanf("%d", &k);
    for (int i = 0; i < n; ++i) if (array[i] == k && _) _ = i + 1;
    printf("%d", _);
}
