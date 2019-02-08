#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double a, b, c, d;
    std::cin >> a >> b >> c;
    if (a < 0){
        a = -a;
        b = -b;
        c = -c;
    }
    d = b * b - 4 * a * c;
    if (d >= 0){
        if (d) std::cout << std::fixed << std::setprecision(6) << (-std::sqrt(d) - b) / (2 * a) << " ";
        std::cout << std::fixed << std::setprecision(6) << (std::sqrt(d) - b) / (2 * a);
    }
}
