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
    int array[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int s = 0;
    int p =1;
    int ans[10];
    for(int i = 0; i<10; i++)
    {
        ans[i] = even(array[i], s, p);
    }
    for(int i =0; i<10; i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
