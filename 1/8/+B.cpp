#include <iostream>

using namespace std;

int main (){
    int m, n, k;
    cin >> n >> m >> k;
    cout << (((k / n <= m)&&!(k % n) || (k / m <= n)&&!(k % m))? "YES" : "NO");
    return 0;
}

