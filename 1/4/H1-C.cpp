#include <iostream>

using namespace std;

int main (){
    int s;
    cin >> s;
    cout << (s == 3 ? "WIN" :
             s      ? "DRAW":
                      "LOSE");
    return 0;
}

