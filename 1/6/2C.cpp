#include <iostream>

using namespace std;

int main (){
    int sum = 0, n;
    for (int i = 0; i < 6; i++){
        cin >> n;
        if ((n % 4) && !(n % 2)) sum += n;
    }
    cout << sum;
    return 0;
}

