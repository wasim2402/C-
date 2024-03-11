#include <iostream>
using namespace std;
int main()
{
    int arr[5]; // declaration
    cout << "Enter array elements: ";
    for (int i = 0; i <= 4; i++) // input arrays
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= 4; i++) // print that arrays
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    arr[0] = 100;                // update index.
    for (int i = 0; i <= 4; i++) // re-print that arrays
    {
        cout << arr[i] << " ";
    }
}