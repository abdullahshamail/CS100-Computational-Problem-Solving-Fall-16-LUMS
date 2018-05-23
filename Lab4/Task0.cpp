#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    cout << "Enter a one digit number (0, 1, ... 9): " ;
    cin >> x;
    if(x == 8)
    {
        cout << "The number "<< x<< " has 2 holes.";
    }
    else
    {
        if( x == 0 || x == 6 || x == 9)
        {
          cout << "The number "<< x<< " has 1 holes.";
        }
        else
        {
            if(x == 1 || x == 2 || x == 3 || x == 5 || x == 7 || x == 4)
            {
          cout << "The number "<< x<< " has 0 holes.";
            }
        }
    }


    return 0;
}
