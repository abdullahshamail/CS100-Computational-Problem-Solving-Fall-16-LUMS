#include <iostream>

using namespace std;

int main()
{
int x,y=7;
string s;
cout << "Enter a number x: "; cin >> x;
cout << "Enter a word s: "; cin >> s;

while (s != "quit")
{
 if(x >=20)
 {
     if(s == "cow")
     {
         cout << "cattle"<< endl;
     }
 }
 else if(x > 10)
 {
     if(s == "bat")
     {
         cout << "cave"<<endl;
     }
     else if(x < 20 && s == "cow")
     {
         cout<< "legend"<< endl;
     }
     else
     {
         cout << "elephant"<< endl;
     }
 }
 else if(x >= 5 && x<11)
 {
     cout << "mouse" << endl;
 }
 else if(x<3)
 {
    if(s == "rabbit")
    {
        cout<< "eqypt"<<endl;
    }
    else
    {
        cout<< "White Rabbit"<<endl;
    }
 }
 else if(x==3 or x==4)
 {
     cout<< "Horse"<<endl;
 }
 else if(x<5)
 {
    if(s=="clouds")
    {
        cout << "rain"<<endl;
    }

 }

 cout << "Enter a number x: "; cin >> x;
cout << "Enter a word s: "; cin >> s;
}
return 0;
}
