#include <iostream>
#include <cmath>

using namespace std;

bool is_point_in_circle(double x, double y, double xc, double yc, double r);

int main() {
    double x, y, xc, yc, r;
    cin >> x >> y >> xc >> yc >> r;
    if (is_point_in_circle(x, y, xc, yc, r)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}

bool is_point_in_circle(double x, double y, double xc, double yc, double r){
    return sqrt((x - xc) * (x - xc) + (y - yc) * (y - yc)) < r;
}
