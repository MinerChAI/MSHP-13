#include <cstdio>

int main(){
    int n, t;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &t);
        if (t >= 0) printf("%d ", t);
    }
}
