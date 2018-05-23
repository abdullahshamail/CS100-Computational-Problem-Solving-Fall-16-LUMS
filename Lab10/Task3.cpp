#include <iostream>

using namespace std;

int main()
{
    int n = 3;
    int array1[n] = {1, 3, 5};
    int array2[n] = {2, 4, 6};
    int ans[2*n];
    int f =0;
    for(int i = 0; i<n; i++)
    {

        ans[f] = array1[i];
        f = f+1;
        ans[f] = array2[i];
        f = f+1;
    }

    for(int i = 0; i<2*n; i++)
    {
        cout<<ans[i]<< " ";
    }
    return 0;
}
