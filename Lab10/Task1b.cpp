#include <iostream>

using namespace std;

int sum(int array[],int n)
{
   int sum1=0;
   for(int i=0; i<n;i++)
   {
         sum1 = sum1 + array[i];
   }
   return sum1;
}

int maximum(int array[],int n)
{
   int max1=array[0];
   for(int i=0; i<n;i++)
   {
         if(array[i]>max1)
         {
             max1 = array[i];
         }
   }
   return max1;
}

int minimum(int array[],int n)
{
   int min1=array[0];
   for(int i=0; i<n;i++)
   {
         if(array[i]<min1)
         {
             min1 = array[i];
         }
   }
   return min1;
}


int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    cout<<"The sum is: "<<sum(array,n)<<endl<<"The maximum is: "<<maximum(array,n)<<endl<<"The minimum is: "<<minimum(array, n);


    return 0;
}
