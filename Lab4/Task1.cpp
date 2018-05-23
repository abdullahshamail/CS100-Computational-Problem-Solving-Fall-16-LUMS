#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter your age: ";
    int age = 0;
    cin >> age;
    cout << "Please enter your year at LUMS: ";
    int year = 0;
    cin >> year;
    if (age-year > 17)
    {
        cout << "Hello Grandpa";

    }
    else
    {
        if (age-year == 17)
        {
            cout << "Hello Average";
        }
        else
        {
            cout << "Hello Smarty pants ";
        }
    }
    return 0;
}
