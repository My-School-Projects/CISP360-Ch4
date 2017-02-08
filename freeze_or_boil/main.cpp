#include <iostream>
#include <string>
using namespace std;

int main()
{
    int temp;

    cout << "Please enter a temperature in farenheit.\n>> ";

    cin >> temp;
    
    string will_freeze = " will freeze at this temperature.\n";
    string will_boil = " will boil at this temperature.\n";

    if (temp <= -362)
        cout << "Oxygen" << will_freeze;
    if (temp <= -173)
        cout << "Ethyl alcohol" << will_freeze;
    if (temp <= -38)
        cout << "Mercury" << will_freeze;
    if (temp <= 32)
        cout << "Water" << will_freeze;
    if (temp >= 676)
        cout << "Mercury" << will_boil;
    if (temp >= 212)
        cout << "Water" << will_boil;
    if (temp >= 172)
        cout << "Ethyl alcohol" << will_boil;
    if (temp >= -306)
        cout << "Oxygen" << will_boil;
}

