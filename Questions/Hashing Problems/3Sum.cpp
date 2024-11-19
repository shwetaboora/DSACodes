#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Brute Force
// vector<vector<int>> threeSum(vector<int> &nums)
// {
//     int n = nums.size();     // TC- O(n^3 * log(uniquTriplets))
//     vector<vector<int>> ans; // SC - O(UniqueTriplets*2)
//     set<vector<int>> s;      // set<uniqueTriplets>
//     for (int i = 0; i < n; i++)
//     { // O(n^3)
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (nums[i] + nums[j] + nums[k] == 0)
//                 {
//                     vector<int> trip = {nums[i], nums[j], nums[k]};
//                     sort(trip.begin(), trip.end());
//                     if (s.find(trip) == s.end())
//                     {                   // O(logn)
//                         s.insert(trip); // O(logn)
//                         ans.push_back(trip);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }

// better using hashing
// vector<vector<int>> threeSum(vector<int> &nums)
// // Better TC- O(n^2*log(uniquetriplets)) /SC- O(uniquetriplets+n)
// {
//     int n = nums.size();
//     set<vector<int>> uniqueTriplets;
//     for (int i = 0; i < n; i++)
//     { // O(n^2)
//         int tar = -nums[i];
//         set<int> s;
//         for (int j = i + 1; j < n; j++)
//         {
//             int third = tar - nums[j];
//             if (s.find(third) != s.end())
//             { // O(log(uniquetriplets))
//                 vector<int> trip = {nums[i], nums[j], third};
//                 sort(trip.begin(), trip.end());
//                 uniqueTriplets.insert(trip);
//             }
//             s.insert(nums[j]);
//         }
//     }
//     vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
//     return ans;
// }

// optimal approach - 2 pointer approach
// optimal approach - 2 pointer TC - O(nlogn+n^2)/ SC - O(uniquetriplets)

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])
                {
                    j++;
                }
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);
    for (const auto &triplet : result)
    {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); ++i)
        {
            cout << triplet[i];
            if (i != triplet.size() - 1)
                cout << ", ";
        }
        cout << "] ";
    }
    cout << endl;
    return 0;
}