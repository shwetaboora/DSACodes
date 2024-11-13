// https://leetcode.com/problems/two-sum/description/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    // optimal approach
    unordered_map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int first = nums[i];
        int second = target - first;
        if (m.find(second) != m.end())
        { // O(1)
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first] = i;
    }
    return ans;
}
int main()
{
    // brute froce O(n2) - finding all pairs and using 2 for loops
    // better O(nlogn)+O(n)/ O(nlogn) - sort the array - traverse from start and end and add them if bigger then do end--
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;
    vector<int> m = twoSum(nums, target);
    for (auto it : m)
    {
        cout << it << endl;
    }

    return 0;
}