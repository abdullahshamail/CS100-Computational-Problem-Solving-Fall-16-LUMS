#include <iostream>

using namespace std;

int main()
{
    int n=0, t=0;
while (n < 2000)
{
n = n+1;
t = t+n;
cout << "T(" << n << ") = " << t << endl;
}
    return 0;
}
