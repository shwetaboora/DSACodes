// https://leetcode.com/problems/find-the-duplicate-number/
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
// set approach
// int findDuplicate(vector<int> &nums)
// {
//     // tc = O(n)
//     // sc = O(n)
//     unordered_set<int> s;
//     for (auto val : nums)
//     {
//         if (s.find(val) != s.end())
//         {
//             return val;
//         }
//         s.insert(val);
//     }
//     return -1;
// }

// slow fasst pointer approach - used for cycle detection in linked list
// at first we take index of first element then that node point towards element off that index then that node point towards next element of that index so if there is any duplicate element it will make an cycle as it will point towards any pervious node.
// approach - 1 slowpointer 1 fastpointer - sp increases by +1 and fp increases by +2 and when sp == fp we move sp to 0 again and increase both by +1 and when again sp == fp that will the starting point of the cycle.
int findDuplicate(vector<int> &nums)
{
    // TC - O(n)
    // SC - O(1)
    int slow = nums[0], fast = nums[0];
    do
    {
        slow = nums[slow];       //+1
        fast = nums[nums[fast]]; //+2
    } while (slow != fast);
    slow = nums[0];
    while (slow != fast)
    {
        slow = nums[slow]; //+1
        fast = nums[fast]; //+1
    }
    return slow;
}

int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << findDuplicate(nums) << endl;
    return 0;
}