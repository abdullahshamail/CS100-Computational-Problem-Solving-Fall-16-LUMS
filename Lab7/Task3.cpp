#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int N;
    cout<< "enter N: ";
    cin>>N;
    //int v = i;

    while(i<=N)
    {
        int space = N - i;
        while(space>0)
        {
            cout<<" ";
            space = space -1;
        }
        int x = 1;
        int y = i;
        while(x<=i)
        {
            while(y>0)
            {
                cout<<y;
                y = y-1;
            }
            x=x+1;
        }
        int xr = 2;
        while (xr<=i)
        {
            cout<<xr;
            xr=xr+1;
        }
        space = 0;
        while(space>0)
        {
            cout<<" ";
            space = space -1;
        }
        cout<<endl;
        i = i+1;
    }
return 0;
}
