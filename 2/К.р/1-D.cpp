#include <stdio.h>

int main(){
    int n, a, b, x, y, k;
    int array[100];
    int indexes[100];
    scanf("%d", &n);
    for (int i = 0; i < n; scanf("%d", array + i), ++i);
    scanf("%d%d%d%d%d", &a, &b, &x, &y, &k);
    for (int i = 0, j = 0; i < n; ++i){
        if (i[array] >= a && i[array] <= b && i > x && i < n - y && !(i % k)){
            j[indexes] = i;
            printf("%d ", i);
            ++j;
        }
    }
    if (0[indexes] == 0) {
        printf("No solution");
        return 0;
    }
    printf("\n");
    for (int i = 0; i < n; printf("%d ", i[indexes]), ++i);
}
