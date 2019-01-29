#include <iostream>

using namespace std;

int gcd(int a, int b);

int main(){
    int a, b;
    cin >> a >> b;
    cout << a / gcd(a, b) << " " << b / gcd(a, b);
    return 0;
}

int gcd(int a, int b){
    if (a > b) swap(a, b);
    if (!a) return b;
    return gcd(a, b % a);
}
