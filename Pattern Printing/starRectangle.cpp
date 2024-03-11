
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter number of row: ";
    cin >> m;
    int n;
    cout << "Enter number of col: ";
    cin >> n;
    for (int i = 1; i <= m; i++) // rows=m
    {
        for (int j = 1; j <= n; j++) // colums=n
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// if m=5 & n=6 then,

//           * * * * * *
//           * * * * * *
//           * * * * * *
//           * * * * * *
//           * * * * * *