#include <iostream>
#include <stdio.h>

int main(){
    int n;
    std::cin >> n;
    for(; n; std::cout << "Crucio\n", --n);
}
