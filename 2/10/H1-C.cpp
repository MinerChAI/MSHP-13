#include <cstdio>
#include <cmath>

double distance(double x1, double y1, double x2, double y2);

int main(){
    int x1, y1, x2, y2, x3, y3;
    scanf("%d%d%d%d%d%d", &x1, &y1,
                          &x2, &y2,
                          &x3, &y3);
    printf("%.6f", distance(x1, y1, x2, y2) + distance(x2, y2, x3, y3) + distance(x1, y1, x3, y3));
}

double distance(double x1, double y1, double x2, double y2){
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
