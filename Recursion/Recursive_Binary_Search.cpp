#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> &nums, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid] == tar)
        {
            return mid;
        }
        else if (nums[mid] < tar)
        {
            return binarysearch(nums, tar, mid + 1, end);
        }
        else
        {
            return binarysearch(nums, tar, st, mid - 1);
        }
    }
    return -1;
}

int search(vector<int> &nums, int tar)
{
    return binarysearch(nums, tar, 0, nums.size() - 1);
}
int main()
{
    vector<int> arr = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    cout << search(arr, target) << endl;
    return 0;
}
