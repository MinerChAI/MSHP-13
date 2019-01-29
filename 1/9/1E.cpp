#include <iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    int i = 1;
    while (i <= 20){
        cout << i << " " << i * n << endl;
        i++;
    }
    return 0;
}

