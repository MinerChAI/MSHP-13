#include <iostream>

using namespace std;

int main (){
    int p = 500, c;
    do {
        cin >> c;
        if (c >= p){
            cout << "NO";
            return 0;
        }
        p = c;
    } while (c != -1);
    cout << "YES";
    return 0;
}

