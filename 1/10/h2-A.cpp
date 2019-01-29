#include <iostream>

using namespace std;

int main (){
    long long t, mult = 1;
    while (t){
        cin >> t;
        if (t) mult *= t;
    }
    cout << mult;
    return 0;
}

