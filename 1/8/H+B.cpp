#include <iostream>

using namespace std;

int main (){
    int k;
    cin >> k;
    cout << ((k - 7 * (k % 3)) / 3 >= 0 ? "YES" : "NO");
    return 0;
}
