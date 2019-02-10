#include <iostream>

int main(){
    int n;
    std::cin >> n;
    for (int i = 0; i < n % 10; std::cout << n / 10, ++i);
    return 0;
}
