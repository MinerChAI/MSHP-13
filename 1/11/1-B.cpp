#include <iostream>

using namespace std;

int main (){
    int s = 0, t;
    do {
        cin >> t;
        if (!(t % 4) && (t >= 100) && (t < 1000)) s += t;
    } while (t);
    cout << s;
    return 0;
}

