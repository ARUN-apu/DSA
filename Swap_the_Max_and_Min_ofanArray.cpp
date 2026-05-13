#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int maximum(int arr[], int n)
{
    int max = INT_MIN;
    int max_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}

int minimum(int arr[], int n)
{
    int min = INT_MAX;
    int min_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i;
        }
    }
    return min_index;
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
    int n = 5;
    int arr[5] = {1, 5, 4, 2, 8};
    cout << "The Original Array is : " << endl;
    printArray(arr, n);
    int Maximum_index = maximum(arr, n);
    int Minimum_index = minimum(arr, n);
    cout << "Maximum value of the Array's is: " << arr[Maximum_index] << endl;
    cout << "Minimum value of the Array's is: " << arr[Minimum_index] << endl;
    swap(arr[Maximum_index], arr[Minimum_index]);
    cout << "After swapping the Array is: " << endl;
    printArray(arr, n);
    return 0;
}