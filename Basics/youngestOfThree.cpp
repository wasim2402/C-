// If the ages of Ram, Shyam and Ajay are input
//   through the keyboard, write a program to
//   determine the youngest of the three
#include <iostream>
using namespace std;
int main()
{
    int r;
    int s;
    int a;
    cout << "Enter Ram's age: ";
    cin >> r;
    cout << "Enter Syam's age: ";
    cin >> s;
    cout << "Enter Ajay's age: ";
    cin >> a;
    if (r < s && r < a)
    {
        cout << "Ram is the youngest";
    }
    else if (s < r && s < a)
    {
        cout << "\nSyam is the youngest" << endl;
    }
    else
    {
        cout << "Ajay is the Youngest";
    }
}