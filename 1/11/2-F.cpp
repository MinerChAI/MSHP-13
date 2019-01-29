#include <iostream>

using namespace std;

int main (){
    int t, n, c = 0, i;
    cin >> n;
    i = n;
    do {
        cin >> t;
        if (t == 5) ++c;
        --i;
    } while (i);
    cout << c;
    return 0;
}

