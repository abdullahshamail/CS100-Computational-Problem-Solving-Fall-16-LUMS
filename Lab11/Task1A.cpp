#include <iostream>

using namespace std;

void Swap(int& A, int& B)
{
    int C;
    C = A;
    A = B;
    B = C;
}

int main()
{
    int A, B;
    cout << "Enter A: ";
    cin>>A;
    cout << "Enter B: ";
    cin>>B;
    cout<<A<<"      "<<B<<endl;
    Swap(A, B);
    cout<<A<<"      "<<B<<endl;



    return 0;
}
