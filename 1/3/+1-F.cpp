#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    cout << 10 * (n % 100) + n / 100;
    return 0;
}
