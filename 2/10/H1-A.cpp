#include <iostream>

using namespace std;

long long my_min(long long x, long long y);

int main() {
    long long a, b;
    cin >> a >> b;
    cout << my_min(a, 3*b) * my_min(2*a - b, 2*b);
    return 0;
}

long long my_min(long long x, long long y) {
    return x < y ? x : y;
}
