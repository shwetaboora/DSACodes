// https : // leetcode.com/problems/product-of-array-except-self/description/
#include <iostream>
#include <vector>
using namespace std;
// brute force O(n^2)
// vector<int> prodArray(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> ans(n, 1);
//     for (int i = 0; i < n; i++)
//     {
//         int prod = 1;
//         for (int j = 0; j < n; j++)
//         {

//             if (i != j)
//             {
//                 prod *= nums[j];
//             }
//         }
//         ans[i] = prod;
//     }
//     return ans;
// }

// optimal approach O(n) but space complexity is bigg as we are making 3 vector for storage O(n)
// vector<int> prodArray(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> ans(n, 1);
//     vector<int> prefix(n, 1);
//     vector<int> suffix(n, 1);

//     // prefix
//     for (int i = 1; i < n; i++)
//     {
//         prefix[i] = prefix[i - 1] * nums[i - 1];
//     }

//     // suffix
//     for (int i = n - 2; i >= 0; i--)
//     {
//         suffix[i] = suffix[i + 1] * nums[i + 1];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         ans[i] = suffix[i] * prefix[i];
//     }

//     return ans;
// }

// optimal approach O(n) but space complexity is o(1)
vector<int> prodArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    // prefix
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // suffix
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= nums[i + 1];
        ans[i] *= suffix;
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = prodArray(nums);

    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}