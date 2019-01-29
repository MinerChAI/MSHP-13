#include <iostream>
#include <climits>

using namespace std;

int main (){
    long long max_ = LONG_LONG_MIN, counter = 1, t = 1;
    while (t)
    {
        cin >> t;
        if (t > max_){
            counter = 1;
            max_ = t;
        }
        else if (t == max_) ++counter;
    }
    cout << counter;
    return 0;
}

