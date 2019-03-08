#include <stdio.h>

int main(){
    int a, z;
    scanf("%d%d", &a, &z);
    printf("%d ", a);
    int data[7] = {a};
    for (int i = 1; i < 7; data[i] = data[i - 1] * z, printf("%d ", data[i]), ++i);
}
