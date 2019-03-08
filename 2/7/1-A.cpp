#include <stdio.h>
#include <cmath>

int main(){
    int a, p;
    scanf("%d%d", &a, &p);
    for(int i = 0; i < 10; printf("%d ", a + i * p), ++i);
}
