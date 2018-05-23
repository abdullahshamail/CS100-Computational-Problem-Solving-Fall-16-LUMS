#include <iostream>

using namespace std;

int sum(int a[][4], int m, char LR)
{
    int sum = 0;
    if(LR == 'L')
    {
        for(int i = 0; i<m; i++)
        {
            sum = sum + a[i][i];
        }
    }
    else
    {
        int q = m-1;
        for(int i = 0; i<m; i++)
        {

            sum = sum + a[i][q];
            q = q-1;
        }
    }
    return sum;
}

int main()
{
   int size = 4;
   int a[size][4]={
   {1, 2, 3, 5},
   {6, 7, 8, 9},
   {11,12,13,14},
   {16,17,18,19}
   };
    char LR;
    cin>>LR;



    cout<<sum(a, size, LR);


    return 0;
}
