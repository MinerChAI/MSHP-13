#include <iostream>
#include <cmath>

int main(){
    int counter0 = 0, footprintsCounter = 0;
    double c, l;
    std::cin >> l;
    do {
        std::cin >> c;
        if (!c) ++counter0;
        if (std::fabs(c - l) <= 1e-2) ++footprintsCounter;
        if (std::fabs(c - l) > 1e-2 && footprintsCounter < 2) footprintsCounter = 0;
        if (c) counter0 = 0;
        //cout << с << " " << footprintsCounter << " " << counter0;
    } while(counter0 != 2);
    std::cout << (footprintsCounter >= 2 ? "Yes" : "No");
}
