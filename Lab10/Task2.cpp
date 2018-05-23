#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int array[n];
    int input;
    for(int i=0; i<n; i++)
    {
        cin>>input;
        if(input==0)
        {
            for(int x = i; x<n; x++)
            {
                array[x] = 0;
            }
            break;
        }
        array[i] = input;
    }
    for(int i=0; i<n;i++)
    {
        cout<<endl<<array[i]<<" ";
    }




    return 0;
}
