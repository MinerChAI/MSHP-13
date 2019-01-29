#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int x1, x2, y1, y2;
    int dx, dy;
    cin >> x1 >> y1 >> x2 >> y2;
    dx = abs(x1 - x2);
    dy = abs(y1 - y2);
    cout << ((max(dx, dy) == 2) && (min(dx, dy) == 1));
    return 0;
}

