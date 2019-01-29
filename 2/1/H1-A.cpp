#include <iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    if (!n){
        cout << "YES";
        return 0;
    }
    while (n % 10){
        n /= 10;
    }
    cout << (n ? "YES" : "NO");
    return 0;
}
