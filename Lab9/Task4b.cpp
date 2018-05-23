#include <iostream>
#include <cmath>

using namespace std;

void printprime(long long int a, long long int b)
{
    while(a<=b)
    {
        if(a%10==0 || a%10==2 || a%10==4 || a%10==5 || a%10==6 || a%10==8)
      {
          a=a+1;

      }
    else
    {
          int roota = sqrt(a);
          int counter=0;
            for(int d =2; d<=roota; d++)
        {

                if(a%d==0)
                {
                    counter++;
                }
        }
        if(counter == 0)
        {
            cout<< a<< endl;
        }
        a=a+1;
    }
    }
}

int main()
{
    long long int x, y;
    cout<<"Enter first digit: ";
    cin>>x;
    cout<<"Enter second digit: ";
    cin>>y;
    printprime(x,y);

}
