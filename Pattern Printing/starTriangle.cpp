#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter number of row: ";
    cin >> m;
    // int n;
    // cout << "Enter number of col: ";
    // cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// if m=5 then     *
//                 * *
//                 * * *
//                 * * * *
//                 * * * * *