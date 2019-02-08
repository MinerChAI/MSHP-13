#include <iostream>
#include <math.h>
#include <iomanip>

int main(){
    double r;
    std::cin >> r;
    std::cout << std::fixed << std::setprecision(3) << (M_PI * r * r * r * 4 / 3);
    return 0;
}
