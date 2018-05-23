#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    cin >> x;
    while (x >= 1)
    {
    cout << x%10 ;
    if (x>10)
    {
        cout << ", ";
    }
    x = x/10;
    }
    cout << endl;
    return 0;
}
