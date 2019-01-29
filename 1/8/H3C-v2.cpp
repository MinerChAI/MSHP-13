#include <iostream>

using namespace std;

int main (){
    int y;
    string animal, color;
    cin >> y;
    y = ((y - 1984) % 60 + 60) % 60;
    //cout << y << endl << y % 12 << endl << y / 12;
    switch (y % 12)
    {
    case 0 : animal = "rat"    ; break;
    case 1 : animal = "ox"     ; break;
    case 2 : animal = "tiger"  ; break;
    case 3 : animal = "rabbit" ; break;
    case 4 : animal = "dragon" ; break;
    case 5 : animal = "snake"  ; break;
    case 6 : animal = "horse"  ; break;
    case 7 : animal = "goat"   ; break;
    case 8 : animal = "monkey" ; break;
    case 9 : animal = "rooster"; break;
    case 10: animal = "dog"    ; break;
    case 11: animal = "pig"    ; break;
    }

    switch (y / 12)
    {
    case 0 : color = "green" ; break;
    case 1 : color = "red"   ; break;
    case 2 : color = "yellow"; break;
    case 3 : color = "white" ; break;
    case 4 : color = "black" ; break;
    }

    cout << "Year of the " << animal << " " << color;
    return 0;
}

