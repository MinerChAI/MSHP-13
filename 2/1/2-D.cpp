#include <iostream>

using namespace std;

int main (){
    int n, c = 0;
    cin >> n;
    while (n){
        if (n % 10 == 6){
            ++c;
            if (c >= 2){
                cout << "YES";
                return 0;
            }
        }
        n /= 10;
    }
    cout << "NO";
    return 0;
}

