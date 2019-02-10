#include <iostream>

int main(){
    int x;
    std::cin >> x;
    for(int i = 1; i <= x; std::cout << "Number of ships: " << i << "\n", ++i);
}
