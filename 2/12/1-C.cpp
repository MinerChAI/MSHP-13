#include <cstdio>
#include <algorithm>
#include <climits>

int main(){
    int n, m=INT_MIN;
    scanf("%d", &n);
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
        if (arr[i] > m) {
            m = i;
        }
    }
    std::swap(arr[2], arr[m]);
    for (int i = 0; i < n; ++i) printf("%d ", arr[i]);
}
