#include <iostream>
#include <stdio.h>

int main(){
    int x, z;
    std::cin >> x >> z;
    for (;x <= z; std::printf("I want this set with %d soldiers!\n", x), ++x);
}
