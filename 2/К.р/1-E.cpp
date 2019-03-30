#include <stdio.h>
#include <climits>

int main(){
    int n, min = INT_MAX, max = INT_MIN, cmin = 0, cmax = 0, c;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &c);
        if (c > max){
            max = c;
            cmax = 1;
        }
        if (c < min){
            min = c;
            cmin = 1;
        }
        if (c == max) ++cmax;
        if (c == min) ++cmin;
    }
    printf("%0.3f", ((float)cmax)/cmin);
}
