#include <iostream>

using namespace std;

int main()
{
    double PI;
    int radius;
    int volume;

    PI = 3.14;
    radius = 1000;
    volume = 1.333*PI*radius*radius*radius;

    cout << "PI = " << PI << ";" <<endl;
    cout << "RADIUS = " << radius << ";" << endl;

    cout << "VOLUME = " << volume << ";" <<endl;
    return 0;
}
