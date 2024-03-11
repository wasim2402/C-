
// Divisiblr by 5 or Not
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a Number: ";
    cin >> x;
    if (x % 5 == 0)
    {
        cout << "Divisible by 5";
    }
    else
    {
        cout << "Not Divisible by 5";
    }
}