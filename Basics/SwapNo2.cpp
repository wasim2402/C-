// another way to swap 2 number without using third veriable>
#include <iostream>
using namespace std;
int main()
{
    int x = 55;
    int y = 92;
    cout << x << " " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << x << " " << y << endl;
}