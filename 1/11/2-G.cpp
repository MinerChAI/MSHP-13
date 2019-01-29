#include <iostream>

using namespace std;

int main (){
    int n, cur, m_sum = 0, fem_sum = 0, m_count = 0, fem_count = 0, i;
    cin >> n;
    i = n;
    do
    {
        cin >> cur;
        if (cur > 0){
            fem_sum += cur;
            ++fem_count;
        } else {
            m_sum -= cur;
            ++m_count;
        }
        --i;
    } while (i);
    cout << m_sum / m_count << " " << fem_sum / fem_count;
    return 0;
}
