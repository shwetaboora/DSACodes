#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size(); // O(nlogn+n^3)
    // optimal
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        for (int j = i + 1; j < n;)
        {

            int p = j + 1;
            int q = n - 1;
            while (p < q)
            {
                long long sum = (long long)nums[i] + (long long)nums[j] +
                                (long long)nums[p] + (long long)nums[q];
                if (sum < target)
                {
                    p++;
                }
                else if (sum > target)
                {
                    q--;
                }
                else
                { // sum == target
                    ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++;
                    q--;

                    while (p < q && nums[p] == nums[p - 1])
                    {
                        p++;
                    }
                }
            }
            j++;
            while (j < n && nums[j] == nums[j - 1])
            {
                j++;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);
    for (const auto &four : result)
    {
        cout << "[";
        for (size_t i = 0; i < four.size(); ++i)
        {
            cout << four[i];
            if (i != four.size() - 1)
            {
                cout << ", ";
            }
        }
        cout << "] ";
    }
    cout << endl;
    return 0;
}