#include <iostream>

using namespace std;


int main()
{
int x,y=7;
string s;
cout << "Enter a number x: "; cin >> x;
cout << "Enter a word s: "; cin >> s;

while (s != "quit")
{
    if(x<5)
    {
        if(s == "clouds")
        {
            cout << "rain" << endl;
        }
        else
        {
            if(x<3)
            {
                if(s=="rabbit")
                {
                    cout << "egypt" << endl;
                }
                else
                {
                    cout << "White Rabbit" <<endl;
                }
            }
            else
            {
                if(x>y)
                {
                    cout << "unicorn" << endl;
                }
                else
                {
                    cout << "Horse" << endl;
                }
            }
        }
    }
    else
    {
        if (x>(y+3))
        {
            if(s=="bat")
            {
                cout << "cave" << endl;
            }
            else
            {
                if(s=="cow")
                {
                    if(x>=20)
                    {
                        cout << "cattle" << endl;
                    }
                    else
                    {
                        if(x<=10)
                        {
                            cout << "Pegasus"<< endl;
                        }
                        else
                        {
                            cout << "legend" << endl;
                        }
                    }
                }
                else
                {
                    cout << "elephant" << endl;
                }
            }
        }
        else
        {
            cout << "mouse" << endl;
        }
    }

cout << "Enter a number x: "; cin >> x;
cout << "Enter a word s: "; cin >> s;
}
}
