// https://leetcode.com/problems/subarray-sum-equals-k/description/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Brute Force Approach //TC- O(n^2)/ SC- O(1)
// int subarraySum(vector<int> &nums, int k)
// {
// int n = nums.size();
// int count = 0;
// for(int i = 0; i<n; i++){
//     int sum = 0;
//     for(int j = i; j<n;j++){
//         sum+=nums[j];
//         if(sum == k){
//             count++;
//         }
//     }
// }
// return count;
// }

// Optimal Approach/ PrefixSum /TC- O(n)/SC- O(n)
int subarraySum(vector<int> &nums, int k)
{
    // Optimal
    int n = nums.size();
    int count = 0;
    vector<int> prefixSum(n, 0);
    prefixSum[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
    }
    unordered_map<int, int> m; // prefixsum,freq
    for (int j = 0; j < n; j++)
    {
        if (prefixSum[j] == k)
        {
            count++;
        }
        int val = prefixSum[j] - k;
        if (m.find(val) != m.end())
        {
            count += m[val];
        }
        if (m.find(prefixSum[j]) == m.end())
        {
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }
    return count;
}
int main()
{
    int k = 3;
    vector<int> nums = {1, 2, 3};
    cout << subarraySum(nums, k);

    return 0;
}