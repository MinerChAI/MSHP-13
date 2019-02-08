#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double x;
    std::cin >> x;
    std::cout << std::fixed << std::setprecision(0) << std::floor(x > 1000 ? x * 0.95 : x > 500 ? x * 0.97 : x);
}
