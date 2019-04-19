#include <cstdio>
using namespace std;
void numswap(int* first, int* second)

int main(){
    int* a, b;
    scanf("%d%d", a, b);
    numswap(&a, &b);
    printf("%d %d", a, b);
}

void numswap(int* first, int* second){
    *first = *first + *second;
    *second = *first - *second;
    *first = *first - *second;
}
