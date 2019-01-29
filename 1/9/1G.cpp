#include <iostream>

using namespace std;

int main (){
    int a, b, c;
    cin >> a >> b >> c;
    while (a <= b){
        if (!(a % c)) cout << a << ' ';
        a++;
    }
    return 0;
}

