#include <iostream>

using namespace std;

int main (){
    /*0*/
    int n, t;
    cin >> n;
    t = 9 * 60 + 45 + 50 * (n / 2) + 60 * ((n - 1) / 2);
    cout << t / 60 << " " << t % 60;
    return 0;
}
