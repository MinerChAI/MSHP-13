#include <cstdio>

int* array_insert(int* a, int n, int x = 100, int k = 0);

int main(){
    int n, x, k;
    scanf("%d", &n);
    int* a = new int[n];
    for (int i = 0; i < n; ++i) scanf("%d", a + i);
    scanf("%d%d", &x, &k);
    int* b = array_insert(a, n, x, k);
    delete [] a;
    for (int i = 0; i <= n; ++i) printf("%d ", b + i);
    delete [] b;
}

int* array_insert(int* a, int n, int x, int k){
    int* arr = new int[n + 1];
    for (int i = 0; i < k; ++i) arr[i] = a[i];
    arr[k] = x;
    for (int i = k + 1; i < n + 1; ++i) arr[i] = a[i - 1];
    return arr;
}
