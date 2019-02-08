#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double r;
    std::cin >> r;
    std::cout << std::fixed << std::setprecision(6) << 4 * std::sqrt(2 * r * r) << std::endl << 2 * r * r;
 }
