#include <stdio.h>

int sign(int val);

int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", sign(x) + sign(y));
    return 0;
}

int sign(int val){
    return ((bool)val) * ((val > 0) * 2 - 1);
}
