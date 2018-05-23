#include <iostream>

using namespace std;

int main()
{
    double pi = 3.1416, r1 = 7, r2 = 2, h1 = 15, h2 = 3, h3 =4;
    double V = pi*((h1*r1*r1)+(h3/3)*(r1*r1+r1*r2+r2*r2)+h2*r2*r2);

    cout << V << endl;
    return 0;
}
