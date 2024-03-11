// print n to 1 number using recursion.
#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0) // base
    {
        return;
    }
    cout << n << endl; // work
    print(n - 1);      // call
}
int main()
{
    int n;
    cout << "Enter n number: ";
    cin >> n;
    print(n);
}