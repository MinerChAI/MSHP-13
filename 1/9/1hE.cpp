#include <iostream>

using namespace std;

int main (){
    int n, i = 10;
    cin >> n;
    while (i < 100){
        if (!(i % n) || (i % 10 == n) || (i / 10 == n)) cout << i << endl;
        ++i;
    }
    return 0;
}

