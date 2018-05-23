#include <iostream>

using namespace std;

int main()
{
    double pi = 3.1416, r1 = 7, r2 = 2, h1 = 15, h2 = 3, h3 =4;
    cout << "Enter r1: " << endl;
    cin >> r1;
    cout << "Enter r2: " << endl;
    cin >> r2;
    cout << "Enter h1: " << endl;
    cin >> h1;
    cout << "Enter h2: " << endl;
    cin >> h2;
    cout << "Enter h3: " << endl;
    cin >> h3;
    double V = pi*((h1*r1*r1)+(h3/3)*(r1*r1+r1*r2+r2*r2)+h2*r2*r2);
    cout << V << endl;
    return 0;
}
