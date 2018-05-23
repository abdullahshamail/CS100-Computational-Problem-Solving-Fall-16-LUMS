#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    char alphal = 'a';
    char alphau = 'A';

    while (alphal <= 'z')
   {
        string alphals = "";
        alphals = alphals+alphal;
        string alphaus = "";
        alphaus = alphaus+alphau;
        int counter = 0;
        for(int i=0; i<str.length();i++)
        {
            if(str.substr(i,1) == alphals ||str.substr(i,1) == alphaus  )
            {
                counter++;
            }
        }
        cout << "Number of " << alphal<<" and "<<alphau<<": "<< counter << endl;
        alphal = alphal +1;
        alphau = alphau +1;
   }
    return 0;
}
