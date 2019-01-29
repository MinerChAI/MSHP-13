#include <iostream>

using namespace std;

int main (){
    double x;
    cin >> x;
    if ((-5 <= x && x <= 1) || (7 <= x) && (x <= 13)){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
