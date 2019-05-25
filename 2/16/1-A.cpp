#include <cstdio>

int main(){
    int n;
    float sum = 0, t;
    scanf("%d", &n);
    scanf("%f", &t);
    for (int i = 1; i < n - 1; ++i) {
        scanf("%f", &t);
        sum += t;
    }
    scanf("%f", &t);
    printf("%.2f", sum / (n - 2));
}
