#include <iostream>
#include <string>


using namespace std;

void morse(int x, int y)
{
    int mx = 1;
    while (mx<x/10)
    {
        mx=mx*10;
    }
    for(;mx>=1;mx=mx/10)
    {
        int ansx = x/mx;
        int ansix = ansx;
        if (ansix>5)
        {
            ansix = ansix-5;
            int remainx = 5-ansix;
            while(ansix>=1)
            {
                cout<<"-";
                ansix=ansix-1;
            }
            while(remainx>=1)
            {
                cout<<".";
                remainx=remainx-1;
            }
        }
        else
        {
            int remainx = 5-ansix;
            while(ansix>=1)
            {
                cout<<".";
                ansix=ansix-1;
            }
             while(remainx>=1)
            {
                cout<<"-";
                remainx=remainx-1;
            }
        }
        x = x-ansx*mx;
    }
    cout<<"   ";
     int my = 1;
    while (my<y/10)
    {
        my=my*10;
    }
    for(;my>=1;my=my/10)
    {
        int ansy = y/my;
        int ansiy = ansy;
        if (ansiy>5)
        {
            ansiy = ansiy-5;
            int remainy = 5-ansiy;
            while(ansiy>=1)
            {
                cout<<"-";
                ansiy=ansiy-1;
            }
            while(remainy>=1)
            {
                cout<<".";
                remainy=remainy-1;
            }
        }
        else
        {
            int remainy = 5-ansiy;
            while(ansiy>=1)
            {
                cout<<".";
                ansiy=ansiy-1;
            }
             while(remainy>=1)
            {
                cout<<"-";
                remainy=remainy-1;
            }
        }
        y = y-ansy*my;
    }
}

int main()
{
    int n1, n2;
    cout<<"Enter x coordinate: ";
    cin>>n1;
    cout<<"Enter y coordinate: ";
    cin>>n2;
    morse(n1,n2);


    return 0;
}



