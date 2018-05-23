#include <iostream>

using namespace std;

void printSomething(int N)
{
    for(int i= 0; i<N; i++)
    {

        cout<<"I am a function, I was executed"<<endl;
    }
}


int main()
{
    int input;
    cout<<"Enter N: ";
    cin>>input;
    printSomething(input);
    return 0;
}
