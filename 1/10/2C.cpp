#include <iostream>

using namespace std;

int main (){
    int p, c;
    cin >> p;
    c = p;
    while (c >= 0){
        if (c != p){
            cout << "NO";
            return 0;
        }
        p = c;
        cin >> c;
    }
    cout << "YES";
    return 0;
}

