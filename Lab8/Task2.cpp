#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, output;
    cout<<"Please Enter Word: "<<endl;
    getline(cin, input);
    int length = input.length();


    for(int i = input.length()-1; i>-1; i--)
    {
        output = output + input.substr(i,1);
    }


    if(input==output)
    {
        cout<<input<<" is a palindrome.";
    }
    else
    {
        cout<<input<<" is not a palindrome.";
    }
    return 0;
}
