#include <iostream>
#include <cmath>

int main(){
    double n;
    std::cin >> n;
    std::cout << (int)std::floor(fabs(n) * 1000) % 10;
}
