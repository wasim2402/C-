#include <iostream>
#include <climits>
using namespace std;

int getMin(int num[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, num[i]);
    }
    // returning min value.
    return mini;
}
int getMax(int num[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
    }
    // returning max value.
    return maxi;
}
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int num[1000];
    // get user input using loop.
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "Maximum value is:" << getMax(num, size) << endl;
    cout << "Minimum value is:" << getMin(num, size) << endl;
}