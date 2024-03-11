#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter side of Square: ";
    cin >> m;
    for (int i = 1; i <= m; i++) // rows=m
    {
        for (int j = 1; j <= m; j++) // colums=m
        {
            cout << (char)(j + 96) << " "; // ASCII value,, char to decimal>>  a to z (97-122).
        }
        cout << endl;
    }
}

// if m=3 then,   a b c
//                a b c
//                a b c
