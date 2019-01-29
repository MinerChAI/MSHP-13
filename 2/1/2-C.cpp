#include <iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    while (n){
        if (n % 10 == 3){
            cout << "YES";
            return 0;
        }
        n /= 10;
    }
    cout << "NO";
    return 0;
}

