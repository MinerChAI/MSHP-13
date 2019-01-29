#include <iostream>

using namespace std;

int main (){
    int a, b ,c, m;
    cin >> a >> b >> c;
    m = max(a, max(b, c));
    cout << (m >= (a + b + c - m) * 2 ? "YES" : "NO");
    return 0;
}

