#include <iostream>
#include <algorithm>
using namespace std;
void reverse_array(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int n = 5;
    int arr[n] = {5, 4, 3, 2, 1};
    reverse_array(arr, n);
    for (int val : arr)
    {
        cout << val << " ";
    }
    return 0;
}