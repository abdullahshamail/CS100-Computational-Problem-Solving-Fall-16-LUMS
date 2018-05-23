#include <iostream>

using namespace std;

int main()
{
    int n=0, t=0;
while (t <= 30000)
{
n = n+1;
t = t+n;
cout << "T(" << n << ") = " << t << endl;
}
    return 0;
}
