#include <iostream>

using namespace std;

void set(int arr[], int row, int column, int desired_row, int desired_column, int val)
{

    if(row*column<desired_column*desired_row || row<desired_row+1 || column<desired_column+1)
    {
        cout<<"error."<<endl;
    }
    else
    {
        arr[desired_row*column+desired_column]=val;
    }
}

int get(int arr[], int row, int column, int desired_row, int desired_column)
{
    if(row*column<desired_column*desired_row || row<desired_row+1 || column<desired_column+1)
    {
        cout<<"error."<<endl;
    }
    else
    {
    	return arr[desired_row*column+desired_column];
    }

}

int main()
{
    int arr[6]={1, 2, 3, 4, 5, 6};
    set(arr, 2, 3, 2, 2, 9);

    for(int i=0; i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<get(arr,2,3,0,2)<<endl;

    return 0;
}
