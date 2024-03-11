#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    char b;
    cin >> b;
    int c;
    cin >> c;
    if (b == '+')
        cout << a + c;
    if (b == '-')
        cout << a - c;
    if (b == '/')
        cout << a / c;
    if (b == '*')
        cout << a * c;
}