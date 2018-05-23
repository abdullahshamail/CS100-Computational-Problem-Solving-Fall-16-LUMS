#include <iostream>

using namespace std;

int main()
{
   int price = 0;
   int qty = 0;
   int total = 0;

   while ( price != -1)
   {
        cout << "Enter item price (-1 to exit): ";
        cin >> price;
        if (price != -1)
        {
            cout << "Enter item quantity: ";
            cin >> qty;

        }
        if (price >= 0 && qty >=0)
        {
            total = total + price*qty;
        }
    }
    if (total > 5000)
    {
        total = 0.9*total;
    }
    cout <<"Total amount due is: Rs. "<<total;
   return 0;
}
