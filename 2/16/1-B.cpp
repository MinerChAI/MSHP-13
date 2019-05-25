#include <cstdio>

int main(){
    int n, t, count = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i){
        scanf("%d", &t);
        count += (t == i);
    }
    printf("%d", count);
}
