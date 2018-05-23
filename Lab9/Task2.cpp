#include <iostream>

using namespace std;

double addition(double x,double y)
{
    double ans;
    ans = x+y;
    return ans;
}
double subtraction(double x,double y)
{
    double ans;
    ans = x-y;
    return ans;
}

double division(double x,double y)
{
    double ans;
    ans = x/y;
    return ans;
}

double multiplication(double x,double y)
{
    double ans;
    ans = x*y;
    return ans;
}

double calculate(double x,string op,double y)
{
    double out;
    if(op=="+")
    {
        out = addition(x, y);
    }
    else if(op=="-")
    {
        out = subtraction(x, y);
    }
    else if(op=="*")
    {
        out = multiplication(x, y);
    }
    else if(op=="/")
    {
        out = division(x, y);
    }
    return out;
}

int main()
{
    double n1, n2;
    double answer;
    string op;
    cout << "Enter first number:" << endl;
    cin>>n1;
    cout << "Enter second number:" << endl;
    cin>>n2;
    cout << "Enter operator:" << endl;
    cin>>op;
    answer=calculate(n1, op, n2);
    cout<<answer;

    return 0;
}
