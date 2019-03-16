#include <stdio.h>

int main(){
    int n;
    bool f = true;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    for (int i = 1; i < n; ++i) if (array[i] > array[i - 1]) {printf("%d ", i + 1); f = false;}
    if (f) printf("0");
}
