#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    for (int i = 1; i <= 20; ++i) printf("%d %d\n", i, i*n);
    return 0;
}
