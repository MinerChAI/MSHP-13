#include <iostream>

using namespace std;

int main (){
    /*0*/
    int temp, n, m = 0;
    for (int i = 1; i <= 3; i++){
        cin >> temp;
        if (temp > m){
            m = temp;
            n = i;
        }
    }
    cout << n;
    return 0;
}
