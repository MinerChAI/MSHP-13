#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int m, n;
    cin >> n >> m;
    if (abs(n) > abs(m)){
        n -= 100;
    }
    cout << n << " " << m;
    return 0;
}
