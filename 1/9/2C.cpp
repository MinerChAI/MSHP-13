#include <iostream>

using namespace std;

int main (){
    int t;
    bool canIHaz77 = false;
    while (t != 100){
        cin >> t;
        if (t == 77) canIHaz77 = true;
    }
    cout << (canIHaz77? "YES" : "NO");
    return 0;
}

