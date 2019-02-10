#include <iostream>

int main(){
    int n, sum_m = 0, sum_f = 0, c_m = 0, c_f = 0, c;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> c;
        if (c > 0) {
            ++c_f;
            sum_f += c;
        } else {
            ++c_m;
            sum_m -= c;
        }
    }
    std::cout << sum_m / c_m << " " << sum_f / c_f;
}
