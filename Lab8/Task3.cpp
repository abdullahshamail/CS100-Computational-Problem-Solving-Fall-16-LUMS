#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Input name: " << endl;
    getline(cin, name);
    int i= 1;
    int length = name.length();
    while(true)
    {
        if(name.substr(i,1)==" ")
        {
            break;
        }
        i++;
    }
    string output = name.substr(i+1,name.length()-i);
    output = output + ", ";
    output = output + name.substr(0,i);
    cout<< output;

    return 0;
}
