#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; printf("\n"), ++i) for (int j = 0; j < m; printf((i - j) % 2 ? "* " : ". "), ++j);
}
