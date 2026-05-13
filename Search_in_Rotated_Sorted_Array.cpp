#include <iostream>
#include <vector>
using namespace std;

/* to Search Rotated Sorted Array
1st Step:- Use a while loop from (start <= end)
2nd step:- Calculate mid value
3rd step:- Check if mid value is equal to target ---return mid value
4th step:- Check it is Left Sorted or Right Sorted  because it is a Rotated Sorted Array so must be one side will be Sorted.
To check Left Sorted or not use Condition like
if(arr[start] <= arr[mid]) if Start is less than mid value than it is left sorted
Else Right Sorted .

5. If Left Sorted check target is there or not to check this use
if(arr[start] <= target && target<= arr[mid]){
then end = mid -1;}
else{
start = mid + 1;}

If it is not true then do the 4th Step's else part.
like
if(arr[mid] <= target && target<= arr[end]){
then start = mid + 1;}
else{
end = mid - 1;}

if all the condition's are false then Return -1.
*/
int Rotated_Sorted_Array(vector<int> &nums, int target)
{
    int st = 0, end = nums.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }

        if (nums[st] <= nums[mid])
        { // Left Sorted
            if (nums[st] <= target && target <= nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        { // Right sorted
            if (nums[mid] <= target && target <= nums[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {60, 70, 10, 20, 30, 40, 50};
    int target = 70;
    cout << "Search Element is at index: " << Rotated_Sorted_Array(vec, target) << endl;
    return 0;
}