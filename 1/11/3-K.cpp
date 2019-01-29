#include <iostream>

using namespace std;

int main (){
    int d, l, i = 15;
    cin >> d >> l;
    do {
        if (!(l % d)){
            cout << l << " ";
            --i;
        }
        ++l;
    } while (i);

    return 0;
}
