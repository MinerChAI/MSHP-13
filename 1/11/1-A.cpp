#include <iostream>

using namespace std;

int main (){
    int t, n = 0, s = 0;
    do {
        cin >> t;
        if (t) ++n;
        s += t;
    } while (t);
    cout << s / n;
    return 0;
}
