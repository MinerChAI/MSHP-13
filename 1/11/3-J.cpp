#include <iostream>

using namespace std;

int main (){
    int a, b, i, mult = 1;
    cin >> a >> b;
    if (a > b) swap(a, b);
    i = a;
    do
    {
        if (!(i % 5 && i % 6)) mult *= i;
        ++i;
    } while (i <= b);
    cout << (mult == 1 ? -1 : mult);
    return 0;
}


