#include <iostream>
#include <cmath>

using namespace std;

int main (){
    long long x, y;
    cin >> x >> y;
    cout << ((x * x + y * y < 16 && x > -sqrt(y + 6)) || (y > x * x - 6 && y < 0));
    return 0;
}
