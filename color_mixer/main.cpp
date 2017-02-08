#include <iostream>
#include <string>
using namespace std;

bool is_color(string);
string get_color();
string get_secondary_color(string, string);

int main()
{

    string color1 = get_color();

    string color2 = get_color();

    cout << "The resultant color is "
         << get_secondary_color(color1, color2)
         << endl;
}

bool is_color(string s)
{
    return s == "red" or s == "yellow" or s == "blue";
}

string get_color()
{
    string input;

    cout << "Enter a primary color (red, yellow or blue):\n>> ";

    cin >> input;

    while (not is_color(input))
    {
        cout << "Please enter either red, yellow or blue.\n>> ";

        cin >> input;
    }
    
    return input;
}

string get_secondary_color(string color1, string color2)
{
    if (color1 == "red")
    {
        if (color2 == "red")
            return "red";
        if (color2 == "yellow")
            return "orange";
        
        return "purple";
    }
    else if (color1 == "yellow")
    {
        if (color2 == "red")
            return "orange";
        if (color2 == "yellow")
            return "yellow";

        return "green";
    }
    else
    {
        if (color2 == "red")
            return "purple";
        if (color2 == "yellow")
            return "green";

        return "blue";
    }

}
