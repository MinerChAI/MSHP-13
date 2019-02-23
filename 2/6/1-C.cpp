#include <stdio.h>

int main(){
    int n, m;
    scanf("%d", &n);
    for (;n;printf("\n"), --n) {
        scanf("%d", &m);
        for(;m;printf("@"), --m);
    }
}
