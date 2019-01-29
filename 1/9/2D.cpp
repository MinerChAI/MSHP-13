#include <iostream>

using namespace std;

int main (){
    int n, m, lowest, i;
    cin >> n;
    i = n;
    while (i){
        cin >> m;
        lowest = min(lowest, m);
        i--;
    }
    return 0;
}

