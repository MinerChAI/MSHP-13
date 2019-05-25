#include <cstdio>

int main(){
    int n, k;
    scanf("%d", &n);
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) scanf("%d", arr + i);
    scanf("%d", &k);
    printf(arr[--k] > arr[k + 1] ? "YES" : "NO");
    delete [] arr;
}
