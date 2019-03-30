#include <iostream>

using namespace std;

int fact(int n);

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int up = 2 * fact(a) + 3 * fact(b);
    int down = fact(c) + fact(d);
    cout << (double) up / down;
    return 0;
}

int fact(int n){
    if (!n) return 1;
    return n-- * fact(n);
}
