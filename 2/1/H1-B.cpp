#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int n, c = 0;
    bool d;
    cin >> n >> d;
    n = abs(n);
    while (n){
        if (n % 10 == 3) ++c;
        n /= 10;
    }
    cout << (d == (c == 3) ? "YES" : "NO");
    return 0;
}

