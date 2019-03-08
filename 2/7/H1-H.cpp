#include <stdio.h>

int main(){
    int n = 30, a, b;
    int array[30];
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    scanf("%d%d", &a, &b);
    for (int i = 1; i < n; i += 2) if (a < array[i] && array[i] < b) {printf("YES"); return 0;}
    printf("NO");
}
