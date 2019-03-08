#include <stdio.h>

#define SWAP(a, b) {    \
int t_ = a;             \
a = b;                  \
b = t_;}                \

int main(){
    int n, max_i = 0;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    for (int i = 0; i < n; ++i) if (array[i] > array[max_i]) max_i = i;
    SWAP(array[2], array[max_i])
    for (int i = 0; i < n; ++i) printf("%d ", array[i]);
}
