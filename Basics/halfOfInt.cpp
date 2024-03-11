#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the Number: ";
    cin >> x;
    float y = (float)x; // typecasting( convert integer into float).
    cout << "Half of this Number is : " << y / 2;
}