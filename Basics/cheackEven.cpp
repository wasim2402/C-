#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a no.: ";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        if (i % 2 == 0)
        {
            cout << i;
        }
    }
}