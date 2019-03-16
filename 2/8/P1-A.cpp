#include <stdio.h>
#include <climits>

int main(){
    int n, c, min = INT_MAX, max = INT_MIN;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &c);
        if (c < min) min = c;
        if (c > max) max = c;
    }
    printf("%d %d", max, min);
}
