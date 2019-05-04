#include <cstdio>

int main(){
    int n, t;
    scanf("%d", &n);
    int* arr = new int[n / 2];
    for (int i = 0; i < n; ++i){
        scanf("%d", &t);
        if (i % 2) printf("%d ", t);
        else arr[i / 2] = t;
    }
    for ))
}
