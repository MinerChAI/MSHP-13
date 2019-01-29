#include <iostream>

using namespace std;

int main (){
    int n, min = 10, max = -1, i = 1, min_c = 0, max_i = 1;
    bool first = true;
    cin >> n;
    while (n || first){
        if (n % 10 >= max) {
            max_i = i;
            max = n % 10;
        }
        if (n % 10 == min) ++min_c;
        if (n % 10 < min) {
            min_c = 1;
            min = n % 10;
        }
        first = false;
        ++i;
        n /= 10;
    }
    cout << max << " " << min << endl << i - max_i << endl << min_c;
    return 0;
}

