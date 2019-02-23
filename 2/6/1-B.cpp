#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    for(;n;printf("\n"), --n) for(int i = 0;i < m;printf("*"), ++i);
}
