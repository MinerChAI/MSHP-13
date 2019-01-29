#include <iostream>

using namespace std;

int main (){
    int x, y;
    cin >> x >> y;
    cout << ((x > 2 && y > 0) || (x > 1 && y < -2));
    return 0;
}
