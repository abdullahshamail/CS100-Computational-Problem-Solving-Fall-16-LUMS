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
    string fyear;
    if (syear == "Fr")
    {
        year = 1;
        fyear = "Freshie";
    }
    else
    {
        if(syear == "So")
        {
            year = 2;
            fyear = "Soph";
        }
        else
        {
            if(syear == "Ju" ||syear == "Jr" )
            {
                year = 3;
                fyear = "Junior";
            }
            else
            {
                if(syear == "Se" ||syear == "Sr" )
                {
                    year = 4;
                    fyear = "Senior";
                }
            }
        }

    }
    if (age-year > 17)
    {
        cout << "Hello Grandpa " << fyear ;

    }
    else
    {
        if (age-year == 17)
        {
            cout << "Hello Average " << fyear;
        }
        else
        {
            cout << "Hello Smarty pants " << fyear;
        }
    }

    return 0;
}
