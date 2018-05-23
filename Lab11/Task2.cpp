#include <iostream>

using namespace std;

void Insert(int MyArray[], int index, int value, int size)
{
    for(int i = size-1; i>index; i--)
    {
        MyArray[i]=MyArray[i-1];
    }
    MyArray[index]=value;
}

int main()
{
    int size = 10;
    int MyArray[size] = {1,3,5,7,9,11,13,15,17,19};
    int VALUE;
    int INDEX;
    for(int i= 0; i>-1; i++)
    {
        cout<<"Enter value: ";
        cin>>VALUE;
        cout<<"Enter index: ";
        cin>>INDEX;
        if(INDEX==-1)
        {
            break;
        }
        Insert(MyArray,INDEX,VALUE,size );
        cout<<"Your array is: ";
        for(int m =0; m<size; m++)
        {
            cout<<MyArray[m]<<" ";
        }
        cout<<endl;

    }


    return 0;
}
