#include <iostream>

using namespace std;

int main (){
    int y;
    cin >> y;
    y = (y - 1984) % 60;
    cout << "Year of the " << (
                                y % 12 == 0  ? "rat"    :
                                y % 12 == 1  ? "ox"     :
                                y % 12 == 2  ? "tiger"  :
                                y % 12 == 3  ? "rabbit" :
                                y % 12 == 4  ? "dragon" :
                                y % 12 == 5  ? "snake"  :
                                y % 12 == 6  ? "horse"  :
                                y % 12 == 7  ? "goat"   :
                                y % 12 == 8  ? "monkey" :
                                y % 12 == 9  ? "rooster":
                                y % 12 == 10 ? "dog"    :
                                               "pig"    )

                                << " " << (

                                y / 12 == 0 ? "green"  :
                                y / 12 == 1 ? "red"    :
                                y / 12 == 2 ? "yellow" :
                                y / 12 == 3 ? "white"  :
                                              "black"  );
    return 0;
}

