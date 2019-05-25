#include <cstdio>
#include <algorithm>

int main(){
    int n, k;
    scanf("%d", &n);
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) scanf("%d", arr + i);
    scanf("%d", &k);
    if (!(arr[--k] > arr[k + 1] ? true : false) != true) std::swap(arr[k], arr[++k]);
    for (int i = 0; i < n; ++i) printf("%d ", i[arr]);
    delete [] arr;
}
