// : If cost price and selling price of an item is
//      input through the keyboard, write a program to
//      determine whether the seller has made profit or
//      incurred loss or no profit no loss. Also determine
//      how much profit he made or loss he incurred.
#include <iostream>
using namespace std;
int main()
{
    int cp;
    cout << "Enter Cost price: ";
    cin >> cp;
    cout << "\n";
    int sp;
    cout << "Enter Selling Price: ";
    cin >> sp;
    if (cp > sp)
    {
        cout << "Loss is: " << cp - sp;
    }
    else if (cp < sp)
    {
        cout << "Profit is: " << sp - cp;
    }
    else
    {
        cout << "No Profit/ Loss";
    }
}