#include <iostream>

using namespace std;

int main(){
    int n, res = 0, k = 1;
    cin >> n;
    while (n){
        if (n % 5){
            res += n % 10 * k;
            k *= 10;
        }
        n /= 10;
    }
    if (res) cout << res;
}
