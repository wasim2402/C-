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
            cout << i << " ";
        }
        cout << endl;
    }
}

// if m=5 then,   1 1 1 1 1
//                2 2 2 2 2
//                3 3 3 3 3
//                4 4 4 4 4
//                5 5 5 5 5