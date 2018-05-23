#include <iostream>

using namespace std;

int pairs(int friends[][5],int size)
{
    int p = 0;
    for(int i = 0; i<5; i++)
    {
        for(int m = 0; m<5; m++)
        {
            if(friends[i][m]=='*')
            {
                p = p + 1;
            }
        }
    }
    p = p/2;
    return p;
}

void common(int friends[][5],int size)
{
  int fone, ftwo;
  cout<<"Enter first friend: ";
  cin>>fone;
  cout<<"Enter ftwo friend: ";
  cin>>ftwo;
  int l = 0;
  for(int i=0; i<size;i++)
  {
      if(friends[fone][i]=='*'&&friends[ftwo][i]=='*')
      {
          cout<<i<<" ";
        l=l+1;
      }
  }
  if(l==0)
  {
      cout<<"No common friends.";
  }
}

int highest(int friends[][5],int size)
{
    int hione = 0;
    int hitwo = 0;
    int highest = 0;
    int l = 0;
    for(int i = 0; i<size;i++)
    {
        for(int m = 0; m<size;m++)
        {
            for(int n = 0; n<size;n++)
            {
                if(i!=m&&friends[i][n]=='*'&&friends[m][n]=='*')
                l = l+1;
            }
            if(l>highest)
            {
                hione = i;
                hitwo = m;
                highest = l;
            }
            l=0;
        }
    }
    cout<<hione<<" and "<<hitwo<<" have the highest amount of friends.";
}

int main()
{
    int size = 5;
    int friends[size][5] = {
    {
        0,0,0,0,0
    },
    {
        0,0,0,0,0
    },
    {
        0,0,0,0,0
    },
    {
        0,0,0,0,0
    },
    {
        0,0,0,0,0
    }
    };



    friends[0][1]='*';
    friends[0][3]='*';
    friends[0][4]='*';
    friends[1][0]='*';
    friends[1][2]='*';
    friends[1][4]='*';
    friends[2][1]='*';
    friends[3][0]='*';
    friends[3][4]='*';
    friends[4][0]='*';
    friends[4][1]='*';
    friends[4][3]='*';

    /*for(int i = 0; i<size; i++)
    {
        for(int m = 0; m<size; m++)
        {
            cout<<friends[i][m]<<" ";
        }
        cout<<endl;
    }*/

    cout<<"Number of pairs: "<<pairs(friends, size)<<endl;
    highest(friends,size);



    return 0;
}
