#include <stdio.h>

int main(){
    float a, t = 0;
    scanf("%f", &a);
    int c = -1;
    for (; printf("%d", t), t < a; scanf("%f", &t), ++c);
    printf("%d", c);
}
