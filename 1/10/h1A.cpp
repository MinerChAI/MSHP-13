#include <iostream>

using namespace std;

int main (){
    int i = 12, m;
    while (i)
    {
        cin >> m;
        if (m == 3){
            cout << "NO";
            return 0;
        }
        --i;
    }
    cout << "YES";
    return 0;
}

