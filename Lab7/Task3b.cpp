#include <iostream>

using namespace std;

int main()
{

    int N;
    cout<< "enter N: ";
    cin>>N;
    int v =1;
    //int v = i;
    while(v<=N)
    {
    int i = 1;
        while(i<=v)
        {
            int space = v - i;
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
        cout<<endl;
    v=v+1;
    }
return 0;
}
