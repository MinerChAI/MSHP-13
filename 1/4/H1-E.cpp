#include <iostream>

using namespace std;

int main (){
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= b && b <= c){
        a *= a;
        b *= b;
        c *= c;
    } else if (a > b && b > c){
        a = max(max(a, b), c);
        b = max(max(a, b), c);
        c = max(max(a, b), c);
    } else {
        a *= -1;
        b *= -1;
        c *= -1;
    }
    cout << a << " "
         << b << " "
         << c       ;
    return 0;
}

