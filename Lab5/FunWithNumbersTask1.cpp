#include <iostream>

using namespace std;

int main()
{
    int f = 0;

    int s = 0;

    cout << "Enter digit 1:"<<endl;
    cin >> f;
    cout << "Enter digit 2:"<<endl;
    cin >> s;


    if(f/10 == s/10)
    {
        cout << "The common digit is '"<<f/10<<"'";
    }
    else
    {
        if(f/10 == s%10)
    {
        cout << "The common digit is '"<<f/10<<"'";
    }
    else
    {
        if(f%10 == s%10)
    {
        cout << "The common digit is '"<<f%10<<"'";
    }
    else
    {
        if(f%10 == s/10)
    {
         cout << "The common digit is '"<<f%10<<"'";
    }
    else
    {
        cout << "No common number";
    }
    }
    }
    }
    cout << endl;
    return 0;
}
