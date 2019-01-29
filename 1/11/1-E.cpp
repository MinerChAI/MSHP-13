#include <iostream>
#include <climits>

using namespace std;

int main (){
    int pp = INT_MAX, p = INT_MAX, c, c_coord = 0, last_max_coord = 0, min_s = 0;
    do {
        cin >> c;
        if (p > pp && p > c)
        {
            if (last_max_coord){
                if (!min_s) min_s = c_coord - last_max_coord;
                min_s = min(min_s, c_coord - last_max_coord);
            }
            last_max_coord = c_coord;
        }
        pp = p;
        p = c;
        ++c_coord;
    } while (c);
    cout << min_s;
    return 0;
}

