#include <iostream>

using namespace std;

int main (){
    int a;
    cin >> a;
    cout << ((abs(a) >= 1000) && (abs(a) < 10000) && !(a % 5) ? "SUCCESS" : "FAILURE");
    return 0;
}

