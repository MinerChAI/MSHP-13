#include <iostream>

using namespace std;

int main (){
    int N, M, x, y;
    cin >> N >> M >> x >> y;
    if (N > M) swap(N, M);
    cout << min(min(x, N - x), min(y, M - y));
    return 0;
}

