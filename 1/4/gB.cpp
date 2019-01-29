#include <iostream>

using namespace std;

int main (){
    int  a, b, c;
    cin >> a >> b >> c;
    if (a > 0 || b > 0 || c > 0){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
