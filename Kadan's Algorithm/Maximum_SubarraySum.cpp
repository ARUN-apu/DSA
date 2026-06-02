#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySum(int arr[], int sz)
{
    int maxsum = INT_MIN;
    int currsum = 0;
    for (int i = 0; i < sz; i++)
    {
        currsum += arr[i];
        maxsum = max(maxsum, currsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    return maxsum;
}

int main()
{
    int sz = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    cout << "Maximum Subarray Sum of this Array is: " << maxSubarraySum(arr, sz) << endl;
    return 0;
}