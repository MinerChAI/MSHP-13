#include <iostream>

using namespace std;

int main (){
    int n, s, t, i;
    cin >> n;
    s = n * (n + 1) / 2;
    i = n - 1;
    do {
        cin >> t;
        s -= t;
        --i;
    } while (i);
    cout << s;
    return 0;
}

