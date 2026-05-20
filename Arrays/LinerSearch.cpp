#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size)
{
    int target;
    cout << "Enter Target: ";
    cin >> target;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(int);

    cout << LinearSearch(arr, size);
    return 0;
}