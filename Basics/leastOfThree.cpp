#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 1st no. ";
    cin >> a;
    cout << "Enter 2nd no. ";
    cin >> b;
    cout << "Enter 3rd no. ";
    cin >> c;
    if (a < b && a < c)
    {
        cout << a << " is least";
    }
    else if (b < c && b < a)
    {
        cout << b << " is least";
    }
    else
    {
        cout << c << " is least";
    }
}