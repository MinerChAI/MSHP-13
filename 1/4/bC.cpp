#include <iostream>

using namespace std;

int main (){
    int m;
    cin >> m;
    if (m <= 2  || m == 12) cout << "WINTER";
    if (m <= 5  && m >  2 ) cout << "SPRING";
    if (m <= 8  && m >  5 ) cout << "SUMMER";
    if (m <= 11 && m >  8 ) cout << "AUTUMN";
    return 0;
}

