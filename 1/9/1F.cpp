#include <iostream>

using namespace std;

int main (){
    int n, i = 1;
    cin >> n;
    while (i <= n){
        if (!(n % i)) cout << i << " ";
        i++;
    }
    return 0;
}

