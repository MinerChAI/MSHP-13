#include <iostream>

using namespace std;

int main (){
    int a, b, c, s = 0;
    cin >> a >> b >> c;
    if (a > 0) s += a;
    if (b > 0) s += b;
    if (c > 0) s += c;
    cout << s;
    return 0;
}
