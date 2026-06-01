#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int val : nums)
    {
        ans ^= val;
    }
    return ans;
}
int main()
{
    vector<int> nums = {4, 4, 2, 1, 2};
    cout << "Single number of the array is: " << singleNumber(nums) << endl;
    return 0;
}
