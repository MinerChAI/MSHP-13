#include <iostream>

using namespace std;

int main (){
    int n, c = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) c += !(n % i);
    cout << c;
    return 0;
}

