#include <iostream>
#include <iomanip>

int main(){
    double a, b;
    std::cin >> a >> b;
    if (a + b == -2) std::cout << "NO SOLUTION";
    else std::cout << std::fixed << std::setprecision(5) << 2 / (a + b + 2);
}
