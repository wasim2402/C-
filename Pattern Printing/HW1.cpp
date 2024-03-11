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
            cout << (char)(i + 64) << " "; // ASCII value,, char to decimal>>A to Z (65-90).
        }
        cout << endl;
    }
}

// if m=4 then,   A A A A
//                B B B B
//                C C C C
//                D D D D