#include <iostream>
#include <iomanip>
using namespace std;

int get_units();

int main()
{
    int units = get_units();
    
    float price = units * 99;

    if (units >= 10)
    {
        if (units < 20)
            price = price * .8;
         else if (units < 50)
            price = price * .7;
        else if (units < 100)
            price = price * .6;
        else if (units >= 100)
            price = price * .5;
    }

    cout << "Price: $" << setprecision(2) << fixed << price << endl;
}

int get_units()
{
    int units;

    cout << "Enter the number of units to be purchased.\n>> ";

    cin >> units;

    while (units < 0)
    {
        cout << "Please enter a positive number.\n>> ";

        cin >> units;
    }
    return units;
}

