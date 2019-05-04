#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    int arr[100][100];
    for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) arr[i][j] = i == j || i == n - j - 1;
    for (int i = 0; i < n; ++i) {for (int j = 0; j < n; ++j) printf("%d ", arr[i][j]); printf("\n");}
}
