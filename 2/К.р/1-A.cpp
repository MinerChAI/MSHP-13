#include <stdio.h>

int main(){
    int n, s = 0, t;
    scanf("%d", &n);
    for (; n; scanf("%d", &t), s += t, --n);
    printf("%d %d", s, s * 120);
}
