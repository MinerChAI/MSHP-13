#include <iostream>

using namespace std;

int main (){
    int n, m = 1, i;
    cin >> n;
    i = n;
    do {
        cin >> m;
        if (!m){
            cout << "YES";
            return 0;
        }
        --i;
    } while (m && i);
    cout << "NO";
    return 0;
}

