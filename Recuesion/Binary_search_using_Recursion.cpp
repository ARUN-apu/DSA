#include <iostream>
#include <vector>
using namespace std;
// Helper Function
int Binsearch(vector<int> &arr, int target, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] <= target)
        {
            return Binsearch(arr, target, mid + 1, end);
        }
        else
        {
            return Binsearch(arr, target, st, mid - 1);
        }
    }
    return -1;
}

int Search(vector<int> &arr, int target)
{
    return Binsearch(arr, target, 0, arr.size() - 1);
}

int main()
{
    vector<int> arr = {-1, 1, 2, 5, 6, 7, 8, 9};
    int target = -1;
    cout << Search(arr, target) << endl;
    return 0;
}