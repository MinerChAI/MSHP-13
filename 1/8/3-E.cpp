#include <iostream>

using namespace std;

int main (){
    int m;
    cin >> m;
    cout << (m <= 2  || m == 12 ? "WINTER":
             m <= 5  && m >  2  ? "SPRING":
             m <= 8  && m >  5  ? "SUMMER":
                                  "AUTUMN");
    return 0;
}

