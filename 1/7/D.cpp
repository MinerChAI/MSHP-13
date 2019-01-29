#include <iostream>

using namespace std;

int main (){
    /*0*/
    int k;
    cin >> k;
    cout << "Mne " << k << " " << ((k % 100 / 10 == 1)? "let" : (k % 10 == 1)? "god" : ((k % 10 >= 2) && (k % 10 <= 4))? "goda" : "let");
    return 0;
}
