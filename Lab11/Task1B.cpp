#include <iostream>

using namespace std;

void Average(int Arr[], int& Avg, int Size)
{
    int sum = 0;
    for(int i = 0; i<Size; i++)
    {
        sum = Arr[i] + sum;
    }
    Avg = sum/Size;

}


int main()
{
    int Size = 5;
    int Arr[Size] = {1, 3, 5, 7, 9};
    int Avg = 0;
    Average(Arr, Avg, Size);

    cout << Avg << endl;



    return 0;
}
