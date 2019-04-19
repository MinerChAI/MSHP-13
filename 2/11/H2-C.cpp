#include <cstdio>

int readArray(int array[]);
void printArray(const int array[], int length);
void reverseArray(int array[], int length);


void readArray(int array[]){
    int n;
    scanf("%d", &n);
    array = new int[n];
    for (int i = 0; i < n; ++i){
        scanf("%d", array + i);
    }
    return n;
}

void printArray(const int array[], int length){
    for (int i = 0; i < length; ++i) printf("%d ", array[i]);
}
