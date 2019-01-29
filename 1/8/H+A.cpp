#include <iostream>

using namespace std;

int main (){
    int t;
    cin >> t;
    cout << (t % 6 <  3 ? "GREEN"   :
             t % 6 == 3 ? "YELLOW"  :
                          "RED"     );
    return 0;
}

