#include <iostream>

using namespace std;

int main (){
    int n;
    bool first = true;
    cin >> n;
    while (n){
        if (!first || n % 10) {
            cout << n % 10;
            first = false;
        }
        n /= 10;
    }
    return 0;
}

