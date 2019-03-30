#include <iostream>

using namespace std;

int my_max(int a, int b);

int main(){
    int a, b;
    cin >> a >> b;
    cout << my_max(a, 2*b) * my_max(2*a - b, b);
    return 0;
}

int my_max(int a, int b){
    return a > b ? a : b;
}
