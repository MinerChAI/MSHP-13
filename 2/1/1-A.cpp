#include <iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    while (n){
        if (n >= 10 || n) cout << n % 10 << " ";
        n /= 10;
    }
    return 0;
}

