#include <cstdio>

int countDivs(int n);

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; ++i) printf("%d ", countDivs(i));
}

int countDivs(int n){
    int c = 0;
    for (int i = 1; i <= n; ++i) if (!(n % i)) ++c;
    return c;
}
