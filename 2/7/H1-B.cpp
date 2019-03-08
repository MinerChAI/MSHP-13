#include <stdio.h>

int main(){
    int n, k, s;
    int data[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &data[i]);
    scanf("%d%d", &k, &s);
    printf(data[--k] < data[--s] ? "NO" : "YES");
}
