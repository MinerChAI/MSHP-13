#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    cout << (fabs(a + b - c) <= 1e-8 ? "YES" : "NO");
}
