#include <iostream>

using namespace std;

int main (){
    int n, m = 0;
    cin >> n;
    while (n){
        m = max(m, n % 10);
        n /= 10;
    }
    cout << m;
    return 0;
}
