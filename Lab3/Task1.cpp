#include <iostream>

using namespace std;

int main()
{
    string plus = "h", bar = "|", oh ="=", plus3 = plus+"--", bar3 = bar+"  ", oh3 = oh+"..";
    string plusline = plus3+plus3+plus3+plus3+plus, barline = bar3+bar3+bar3+bar3+bar, ohline = oh3+oh3+oh3+oh3+oh;


    cout << plusline << endl;
    cout << barline << endl;
    cout << ohline << endl;
    cout << barline << endl;
    cout << plusline << endl;
    cout << barline << endl;
    cout << plusline << endl;
    cout << barline << endl;
    cout << ohline << endl;
    cout << barline << endl;
    cout << plusline << endl;
    cout << barline << endl;
    cout << ohline << endl;
    return 0;
}
