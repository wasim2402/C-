// write a programe to Sum digits of a given number.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        int ld = n % 10;
        n = n / 10;
        sum += ld;
    }
    cout << sum;
}