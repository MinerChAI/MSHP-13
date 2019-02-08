#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double a, r;
    std::cin >> a >> r;
    std::cout << std::fixed << std::setprecision(6) << a * a - M_PI * r * r;
}
