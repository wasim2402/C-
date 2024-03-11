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
            cout << (char)(j + 64) << " "; // ASCII value,, char to decimal>>A to Z (65-90).
        }
        cout << endl;
    }
}

// if m=4 then,   A B C D
//                A B C D
//                A B C D
//                A B C D