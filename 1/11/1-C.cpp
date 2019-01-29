#include <iostream>
#include <climits>

using namespace std;

int main (){
    int t, m = INT_MIN;
    do {
        cin >> t;
        if (!(t % 10) && (t != 1000) && (t > m)) m = t;
    } while(t != 1000);
    cout << m;
    return 0;
}

