#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 9, 8, 2, 6}; // declaration & Initialization both in one time.
    // output revers order.
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}