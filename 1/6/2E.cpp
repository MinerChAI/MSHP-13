#include <iostream>

using namespace std;

int main (){
    int maximum = -1500000000, c, n;
    for (int i = 0; i < 4; i++){
        cin >> n;
        if (n > maximum){
            maximum = n;
            c = 1;
        } else if (n == maximum) c++;
    }
    cout << maximum << " " << c;
    return 0;
}
