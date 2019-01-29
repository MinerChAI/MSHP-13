#include <iostream>

using namespace std;

int main (){
    int n, m;
    cout << "The ";
    switch (n)
    {
        case 1:  cout << "one"  ; break;
        case 2:  cout << "two"  ; break;
        case 3:  cout << "three"; break;
        case 4:  cout << "four" ; break;
        case 5:  cout << "five" ; break;
        case 6:  cout << "six"  ; break;
        case 7:  cout << "seven"; break;
        case 8:  cout << "eight"; break;
        case 9:  cout << "nine" ; break;
        case 10: cout << "ten"  ; break;
        case 11: cout << "jack" ; break;
        case 12: cout << "queen"; break;
        case 13: cout << "king" ; break;
        case 14: cout << "ace"  ; break;
    }
    cout << " of ";
    switch (m)
    {
    case 1: cout << "spades"  ; break;
    case 2: cout << "clubs"   ; break;
    case 3: cout << "diamonds"; break;
    case 4: cout << "hearts"  ; break;
    }
    return 0;
}

