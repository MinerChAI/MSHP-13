#include <iostream>

using namespace std;

int main (){
    int a, b, c, m;
    cin >> a >> b >> c;
    m = max(max(a, b), c);
    if (a == m) a -= 5;
    if (b == m) b -= 5;
    if (c == m) c -= 5;
    cout << a << " "
         << b << " "
         << c       ;
    return 0;
}

