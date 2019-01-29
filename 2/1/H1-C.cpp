#include <iostream>

using namespace std;

int main (){
    int n, d = 0;
    cin >> n;
    while (n){
        if (n % 10 == 0) --d;
        if (n % 10 == 9) ++d;
        n /= 10;
}
    cout << (d > 0) * 9;
    return 0;
}

