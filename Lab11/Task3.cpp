#include <iostream>

using namespace std;

void Flip(int array[], int size)
{

    int newarr[size];
    for(int i=0; i<size; i++)
    {
        newarr[i]=array[size-1-i];
    }
    for(int i = 0; i<size;i++)
    {
        array[i] = newarr[i];
    }
}

int main()
{
    int size = 9;
    int array[size]={1,3,5,7,9,11,13,15,17};

    cout << "Old array: " << endl;
    for(int i = 0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<< endl;

    //insert function here.
    Flip(array, size);
    cout << "New array: " << endl;
    for(int i = 0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<< endl;



    return 0;
}
