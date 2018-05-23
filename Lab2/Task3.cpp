#include <iostream>

using namespace std;

int main()
{
    int length = 0;
    cout << "Length? ";
    cin >> length;
    int width = 0;
    cout << "Width? ";
    cin >> width;
    int sqtilel = 3;
    int sqtileA = sqtilel*sqtilel;
    int noinlength = length/sqtilel;
    int noinwidth = width/sqtilel;
    int modlength = length%3;
    int modwidth = width%3;

    cout << "Number of tiles = " << noinlength*noinwidth << endl;
    cout << "Area left = " << modlength*width+modwidth*length << endl;
    return 0;
}
