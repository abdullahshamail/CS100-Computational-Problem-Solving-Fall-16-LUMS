#include <iostream>

using namespace std;

int main()
{
    int x;

    int cube;
    while (x != 0)
    {
        int total = 0;
        cin >> x;
        int n = x;
        int p = x;
        while (p >= 1.0)
        {
            n = p%10;
            cube = n*n*n;
            total = total + cube;
            p = p/10;
        }
        if( total == x || total == 0)
        {
            cout <<"This is an Amstrong number."  <<endl;
        }
        else
        {
            cout <<"This is not an Amstrong number."<< endl;
        }

    }
     return 0;
}
