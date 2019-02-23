#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; printf("\n"), ++i) for (int j = 1; j <= n; printf("%d ", i * j), ++j);
}
