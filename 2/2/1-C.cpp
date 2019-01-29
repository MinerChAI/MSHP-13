#include <iostream>
#include <stdio.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    for (int i = 0; i <= n / 4; ++i) printf("%d %d\n", (n - 4 * i) / 2, i);
    return 0;
}
