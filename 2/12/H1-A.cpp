#include <cstdio>

int main(){
    int n, t;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &t);
        if (9 < t && t < 100) printf("%d ", t);
    }
    return 0;
}
