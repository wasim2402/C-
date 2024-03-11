#include <iostream>
using namespace std;
void update(int arr[], int n)
{
    cout << "Inside the function: ";
    // updating index under function.
    arr[0] = 250;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Going back to main function";
}
int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    cout << endl
         << "Printing in main function: ";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
}