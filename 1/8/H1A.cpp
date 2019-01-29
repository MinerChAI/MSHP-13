#include <iostream>

using namespace std;

int main (){
    int n;
    cin >> n;
    switch (n)
    {
    case 5:
        cout << "V";
        break;

    case 4:
        cout << "IV";
        break;

    default:
        for (int i=0; i < n; i++)
            cout << "I";
        break;
    }

    return 0;
}

