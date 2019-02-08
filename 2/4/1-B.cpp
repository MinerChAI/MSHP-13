#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long double r;
    cin >> r;
    cout << fixed << setprecision(6) << r * r * 3.14;
    return 0;
}
