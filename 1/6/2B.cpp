#include <iostream>

using namespace std;

int main (){
    int c = 0, n;
    for (int i = 0; i < 5; i++){
        cin >> n;
        if (!(n % 4)) c++;
    }
    cout << c;
    return 0;
}

