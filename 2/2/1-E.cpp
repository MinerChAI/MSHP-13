#include <iostream>
#include <climits>

using namespace std;

int main (){
    int n, c, p = INT_MIN, m = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> c;
        if (c > m){
            p = m;
            m = c;
        } else if (c > p) p = c;
    }
    cout << m << " " << p;
    return 0;
}

