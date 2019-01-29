#include <iostream>

using namespace std;

int main (){
    int n = 0, m = -2147483648;
    while (m){
        cin >> m;
        if (m > n) n = m;
    }
    cout << n;
    return 0;
}

