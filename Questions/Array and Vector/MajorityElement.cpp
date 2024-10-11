#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// brute force O(n^2)
// int majorityElement(vector<int> &nums)
// {
//     int n = nums.size();
//     for (int val : nums)
//     {
//         int freq = 0;
//         for (int el : nums)
//         {
//             if (el == val)
//             {
//                 freq++;
//             }
//         }
//         if (freq > n / 2)
//         {
//             return val;
//         }
//     }
//     return -1;
// }

// Optimized O(nlogn)
// int majorityElement(vector<int> &nums)
// {
//     // Optimized O(nlogn)
//     int n = nums.size();
//     // sort
//     sort(nums.begin(), nums.end()); // O(logn)
//     // count frequency
//     int freq = 1, ans = nums[0];
//     for (int i = 1; i < n; i++)
//     { // O(n)
//         if (nums[i] == nums[i - 1])
//         {
//             freq++;
//         }
//         else
//         {
//             freq = 1;
//             ans = nums[i];
//         }
//         if (freq > n / 2)
//         {
//             return ans;
//         }
//     }
//     return ans;
// }

// moore's voting algo O(n)
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }

        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }

    // in the case when we don't know that ans will exist in the array
    // int count = 0;
    // for (int val : nums)
    // {
    //     if (val == ans)
    //     {
    //         count++;
    //     }
    // }
    // if (count > n / 2)
    // {
    //     return ans;
    // }
    // else
    // {
    //     return -1;
    // }

    return ans;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums) << endl;
    return 0;
}