#include <iostream>
using namespace std;
void revers(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {5, 12, 6, 3, -2, 9};
    int brr[5] = {2, 5, 8, 9, 1};
    revers(arr, 6);
    revers(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
}