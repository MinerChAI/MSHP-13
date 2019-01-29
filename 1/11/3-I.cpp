#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int a, b, i;
    cin >> a >> b;
    if (a > b) swap(a, b);
    i = a;
    do
    {
        if ((int)sqrt(i) * (int)sqrt(i) == i) cout << i << " ";
        ++i;
    } while (i <= b);
    return 0;
}

