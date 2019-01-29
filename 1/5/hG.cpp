#include <iostream>

using namespace std;

int main (){
    int x, y;
    cin >> x >> y;
    cout << ((x > 2) || (y > 0.5 && y < 1.5));
    return 0;
}
