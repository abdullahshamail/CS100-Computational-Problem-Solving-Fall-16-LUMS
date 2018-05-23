#include <iostream>
#include <cmath>

using namespace std;

void check(long long int x)
{
     int rootx = sqrt(x);
    int counter=0;
    for(int d =2; d<=rootx; d++)
    {
        if(x%d==0)
        {
            counter++;
        }
    }
    if(counter==0)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

}


int main()
{
    long long int x;
    cout<<"Enter digit: ";
    cin>>x;
    check(x);

}
