#include <iostream>

using namespace std;

int main (){
    int m;
    cin >> m;
    cout << ((m <= 2)? "WINTER" : (m <= 5)? "SPRING" : (m <= 8)? "SUMMER" : (m <= 11)? "AUTUMN" : "WINTER");
    return 0;
}

