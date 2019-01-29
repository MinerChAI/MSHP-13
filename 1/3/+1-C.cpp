#include <iostream>

using namespace std;

int main(){
    int b1, b2, c1, c2, e1, e2;
    cin >> b1 >> c1 >> e1 >> b2 >> c2 >> e2;
    cout << (b1 - e1) * c1 + (b2 - e2) * c2 << " " << b1 * c1 + b2 * c2;
    return 0;
}
