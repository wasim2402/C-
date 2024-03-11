#include <iostream>
using namespace std;
int main() // 1,2,4,8,16,32,64.........n
{
    int n;
    cout << "Enter n np.: ";
    cin >> n;
    int a = 1; // 5,15,45.........n then a=5 and a=a*3;
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        a = a * 2;
    }
}
