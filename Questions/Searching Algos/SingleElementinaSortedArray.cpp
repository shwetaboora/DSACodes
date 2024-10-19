// https://leetcode.com/problems/single-element-in-a-sorted-array/description/
#include <iostream>
#include <vector>
using namespace std;
// brute force linear search

// optimal approach binary search
int SingleElement(vector<int> &nums)
{
    int n = nums.size();
    int st = 0;
    int end = n - 1;
    if (n == 1)
    {
        return nums[0];
    }

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mid == 0 && nums[0] != nums[1])
        {
            return nums[mid];
        }
        if (mid == n - 1 && nums[n - 1] != nums[n - 2])
        {
            return nums[mid];
        }
        if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }

        if (mid % 2 == 0) // even
        {
            if (nums[mid - 1] == nums[mid]) // left
            {
                end = mid - 1;
            }
            else // right
            {
                st = mid + 1;
            }
        }

        else // odd
        {
            if (nums[mid - 1] == nums[mid]) // right
            {
                st = mid + 1;
            }
            else // left
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {3, 3, 7, 7, 10, 11, 11};

    cout << SingleElement(nums) << endl;

    return 0;
}