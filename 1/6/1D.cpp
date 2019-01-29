#include <iostream>

using namespace std;

int main (){
    int l;
    cin >> l;
    cout << l / 1000000 << " " << l % 1000000 / 1000 << " " << l % 1000 / 10 << " " << l % 10;
    return 0;
}

