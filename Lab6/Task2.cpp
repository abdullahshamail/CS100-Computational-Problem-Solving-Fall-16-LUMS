#include <iostream>

using namespace std;

int main()
{
    string s;
    while (s != "Stop it")
    {
        cout << "Say something:"<< endl;
        getline(cin, s);
        if (s != "Stop it")
        {
            cout << s << endl;
            cout << endl;
        }
    }
    cout << "Sorry";
    return 0;
}

