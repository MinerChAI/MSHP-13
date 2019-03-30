#include <stdio.h>
#include <math.h>

using namespace std;

double hyp(double a, double b);

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%0.6f", a + b + c + hyp(hyp(a, b), c));
}

double hyp(double a, double b){
    return sqrt(a * a + b * b);
}
