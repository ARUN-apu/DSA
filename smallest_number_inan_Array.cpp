#include <iostream>
using namespace std;

int smallest(int arr[], int n, int &index)
{
    int small = arr[0];
    index = 0;
    for (int i = 1; i < n; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
            index = i;
        }
    }
    return small;
}

int largest(int arr[], int n, int &index)
{
    int large = arr[0];
    index = 0;
    for (int i = 1; i < n; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
            index = i;
        }
    }
    return large;
}

int main()
{
    int n = 5;
    int arr[] = {10, 12, 9, 5, 18};
    int index;

    int smallestValue = smallest(arr, n, index);
    cout << "Smallest number is " << smallestValue << " at index " << index << endl;

    int largestValue = largest(arr, n, index);
    cout << "Largest number is " << largestValue << " at index " << index << endl;

    return 0;
}
