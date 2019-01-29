#include <iostream>

using namespace std;

int main (){
    int p = 2147483647, c = 2147483647, counter = 0;
    while(c){
        if (c > p) ++counter;
        p = c;
        cin >> c;
    }
    cout << counter;
    return 0;
}

