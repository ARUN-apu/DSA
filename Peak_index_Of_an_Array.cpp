#include <iostream>
#include <vector>
using namespace std;

int Peak_Index(vector<int> &arr)
{
    int start = 1;
    int end = arr.size() - 2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> vec = {10, 20, 30, 50, 45};
    cout << Peak_Index(vec);
    return 0;
}