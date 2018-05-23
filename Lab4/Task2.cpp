#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter your age: ";
    int age = 0;
    cin >> age;
    cout << "Enter your year (Fr, So, Ju or Se):";
    string syear;
    cin >> syear;
    int year = 0;
    if (syear == "Fr")
    {
        year = 1;
    }
    else
    {
        if(syear == "So")
        {
            year = 2;
        }
        else
        {
            if(syear == "Ju" ||syear == "Jr")
            {
                year = 3;
            }
            else
            {
                if(syear == "Se" ||syear == "Sr" )
                {
                    year = 4;
                }
            }
        }

    }
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
