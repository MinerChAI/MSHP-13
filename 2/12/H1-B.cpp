#include <cstdio>
#include <algorithm>

int main(){
    int n, m;
    scanf("%d", &n);
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
        if (arr[i] <= arr[m]) m = i;
    }
    std::swap(arr[0], arr[m]);
    for (int i = 0; i < n; ++i) printf("%d ", arr[i]);
}
