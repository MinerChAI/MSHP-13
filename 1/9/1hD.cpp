#include <iostream>

using namespace std;

int main (){
    int x, i = 1;
    cin >> x;
    while (i <= 10){
        cout << i << " * " << x << " = " << i * x << endl;
        ++i;
    }
    return 0;
}

