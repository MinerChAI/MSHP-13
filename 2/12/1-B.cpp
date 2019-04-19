#include <cstdio>

int main(){
    int n, x, s = 0;
    scanf("%d", &n);
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) scanf("%d", arr + i);
    scanf("%d", &x);
    for (int i = 0; i < n; ++i) if (arr[i] > x) s += arr[i];
    printf("%d", s);
}
