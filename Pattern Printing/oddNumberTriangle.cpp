#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter number of row: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << 2 * j - 1 << " ";
        }
        cout << endl;
    }
}

// 1
// 1 3
// 1 3 5
// 1 3 5 7