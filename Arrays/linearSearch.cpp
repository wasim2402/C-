#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {2, 54, 23, 9, 8, -20, 3, 1, 6, 10};
    // whether 1 is present in it or not?
    cout << "Enter the key to search for: ";
    int key;
    cin >> key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is not present" << endl;
    }
}