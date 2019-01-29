#include <iostream>
#include <climits>

using namespace std;

int main (){
    long long p = LONG_LONG_MAX;
    int c;
    do{
        cin >> c;
        if (p == c){
            cout << "YES";
            return 0;
        }
        p = c;
    } while (c != -1);
    cout << "NO";
    return 0;
}

