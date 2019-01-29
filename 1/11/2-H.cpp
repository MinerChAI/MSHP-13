#include <iostream>
#include <climits>

using namespace std;

int main (){
    int n, c, min_ = INT_MAX, max_ = INT_MIN, i;
    cin >> n;
    i = n;
    do
    {
        cin >> c;
        min_ = min(c, min_);
        max_ = max(c, max_);
        --i;
    } while (i);
    cout << max_ - min_;
    return 0;
}

