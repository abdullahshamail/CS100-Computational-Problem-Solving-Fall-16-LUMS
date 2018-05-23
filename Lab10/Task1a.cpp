#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int task[n] = {1,4,9,16,25,36,49,64,81,100};
    //Hardcoded because I had to change computers, and lost my file to task 0. Asked the TA and he said it was okay to hardcode.
    int sum = 0;
    int min1 = task[0];
    int max1 = task[0];
    for(int i=0; i<n; i++)
    {
        sum = sum + task[i];
        if(task[i]<min1)
        {
            min1 = task[i];
        }
        if(task[i]>min1)
        {
            max1 = task[i];
        }

    }

    cout<<"The sum is: "<<sum<<endl<<"The max is: "<<max1<<endl<<"The min is: "<<min1<<endl;




    return 0;
}
