#include <iostream>

using namespace std;

int even(int n, int s, int p)
{
    int s1= s;
    s1 = s1+2;
    if(s1<n)
    {
        p = s1*p;
        return even(n, s1, p);
    }
     else
    {
        if(p == 1)
        {
            return 0;
        }
        else
        {
            return p;
        }
    }
}

int main()
{
    int n = 0;
    cout << "Enter number: " << endl;
    cin>> n;
    int s = 0;
    int p =1;
    cout<< even(n, s, p);
    return 0;
}
