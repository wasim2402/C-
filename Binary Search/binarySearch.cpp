#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        // go to right side>>
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 4, 8, 10, 20, 25};
    int odd[5] = {3, 5, 7, 11, 15};
    int index = binarySearch(even, 6, 10);
    cout << "index of 10 is:" << index << endl;

    return 0;
}