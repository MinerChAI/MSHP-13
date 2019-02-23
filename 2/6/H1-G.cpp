#include <stdio.h>
#include <cmath>

int Hypotenuse(int a, int b);

int main(){
    int l, r;
    scanf("%d%d", &l, &r);
    for (int x = l; x <= r; ++x) for (int y = l; y <= r; ++y) if (Hypotenuse(x, y) * Hypotenuse(x, y) == x * x + y * y && Hypotenuse(x, y) >= l && Hypotenuse(x, y) <= r) printf("%d %d %d ", x, y, Hypotenuse(x, y));
}

int Hypotenuse(int a, int b){
    return std::sqrt(a * a + b * b);
}
