#include <iostream>

using namespace std;

int main()
{

    int output = 1;
    while(output!=0)
    {
        cout << "Press 1 for A*B" << endl;
        cout << "Press 2 for A+b" << endl;
        cout << "Press 3 for A-b" << endl;
        cout << "Press 4 for A%b" << endl;
        cout << "Press 5 to re-enter the numbers" << endl;
        int reply, A, B;
        cin>>reply;
        if(reply<1 || reply>5)
        {
            cout<<"Error, try again!"<< endl;
            continue;
        }
        if(reply == 5)
        {
            cout<<endl;
            continue;
        }
        cout<<"Enter A: ";
        cin>> A;
        cout<<"Enter B: ";
        cin>> B;
        if(reply == 1)
        {
            output = A*B;
            cout<< output;
        }
        if(reply == 2)
        {
            output = A+B;
            cout<< output;
        }
        if(reply == 3)
        {
            output = A-B;
            cout<< output;
        }
        if(reply == 4)
        {
            output = A%B;
            cout<< output;
        }

        cout<<endl;
    }
    return 0;
}
