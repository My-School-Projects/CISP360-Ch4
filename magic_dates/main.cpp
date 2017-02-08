#include <iostream>
#include <string>
using namespace std;

int main()
{
    int month, day, year;

    cout << "Enter a (numeric) month\n>> ";

    cin >> month;

    cout << "Enter a (numeric) day\n>> ";

    cin >> day;

    cout << "Enter a two digit year\n>> ";

    cin >> year;

    if (month * day == year)
    {
        cout << "The date is magic." << endl;
    }
    else
    {
        cout << "The date is not magic." << endl;
    }

}

