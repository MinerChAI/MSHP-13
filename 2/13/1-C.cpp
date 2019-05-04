#include <cstdio>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[100][100];
    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++j) arr[i][j] = (i * j ? arr[i - 1][j] + arr[i][j - 1] : 1);
    for (int i = 0; i < n; ++i) {for (int j = 0; j < m; ++j) printf("%d ", arr[i][j]); printf("\n");}
}
