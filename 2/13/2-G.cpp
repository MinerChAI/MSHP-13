#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    int arr[500][500];
    for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) scanf("%d", arr[i] + j);
    for (int i = 1; i < n; ++i) if (arr[i][n - i - 1] > arr[i - 1][n - i]) {
        printf("%d %d", i, n - i - 1);
        return 0;
    }
    printf("YES");
}
