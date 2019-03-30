#include <stdio.h>

#define SWAP(a, b)      \
t_ = a;                 \
a = b;                  \
b = t_

int min(const int array[], int start, int length);
void sort(int array[], int length);

int main(){
    int n, m, c = 0;

    int array1[100];
    int array2[100];
    int res[100];

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &array1[i]);
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) scanf("%d", &array2[i]);

    for (int i = 0; i < n; ++i) for (int j = 0; j < m; ++i) if (array1[i] == array2[j]) ++c;
    sort(res, c);

    for (int i = 0; i < c; printf("%d", res[i]), ++i);
}

int min(const int array[], int start, int length){
    int min_i = start;
    for (int i = 0; i < length; ++i) if (array[min_i] > array[i]) min_i = i;
    return min_i;
}

void sort(int array[], int length){
    for (int i = 0, int t_; i < length; SWAP(array[i], array[min(array, i, length)]), ++i);
}
