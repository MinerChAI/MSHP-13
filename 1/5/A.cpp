#include <iostream>

using namespace std;

int main (){
    int age;
    cin >> age;
    cout << ((age <= 6)? "BABY" : (age <= 17)? "SCHOOLCHILD" : (age <= 64)? "ADULT" : (age <= 120)? "ELDER" : "GHOST");
    return 0;
}
