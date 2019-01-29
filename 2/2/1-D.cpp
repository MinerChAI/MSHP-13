#include <iostream>

using namespace std;

int main (){
    int n, c = 0, cur;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> cur;
        c += cur;
    }
    cout << min(c, n - c);
    return 0;
}

