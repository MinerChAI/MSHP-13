#include <iostream>

using namespace std;

int main (){
    int n, o, k = 1;
    cin >> n;
    while (n){
        o += n % 8 * k;
        k *= 10;
        n /= 8;
    }
    cout << o;
    return 0;
}

