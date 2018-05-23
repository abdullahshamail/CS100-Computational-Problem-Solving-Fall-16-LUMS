#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    while (n<10)
    {
        int x = 1;
        while (x<10)
        {
            cout<<n*x<< " ";
            x = x+1;
        }
        cout<<endl;
        n = n+1;
    }
    return 0;
}
