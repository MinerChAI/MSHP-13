#include <iostream>

using namespace std;

int main (){
    int n, s, d = 3;
    cin >> n;
    while(d){
        s += n % 10;
        --d;
        n /= 10;
    }
    while (n){
        s -= n % 10;
        n /= 10;
    }
    cout << (s ? "NO" : "YES");
    return 0;
}

