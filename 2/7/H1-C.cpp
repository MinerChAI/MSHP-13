#include <stdio.h>

int main(){
    int n;
    int array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &array[i]);
    for (int i = 0; i < n; ++i) if (array[i] >= 0) printf("%d ", array[i]);
    for (int i = 0; i < n; ++i) if (array[i] <  0) printf("%d ", array[i]);
}
