//BODY MASS INDEX CALCULATOR
#include <iostream>
using namespace std;
int main()
{ //declaring variables
double weight = 0;
double height = 0;
double heightsqr;
//prompting user for input
cout << "Please enter your height in centimeters: ";
cin >> height;
cout << "Please enter your weight in KGs: ";
cin >> weight;
// squaring the height
height = height/100;
heightsqr = height*height;
//calculating the BMI
double BMI = weight/heightsqr;
//printing the BMI using cout
cout << "BMI = "
<< BMI << " kg/(m^2)" << endl;
}
