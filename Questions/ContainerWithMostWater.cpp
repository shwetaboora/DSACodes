// https : // leetcode.com/problems/container-with-most-water/description/
#include <iostream>
#include <vector>
using namespace std;
// brute force O(n^2)
// int containerWithMostWater(vector<int> &height)
// {
//     int maxwater = 0;
//     for (int i = 0; i < height.size(); i++)
//     {
//         for (int j = i + 1; j < height.size(); j++)
//         {
//             int w = j - i;
//             int ht = min(height[i], height[j]);
//             int curwater = w * ht;
//             maxwater = max(maxwater, curwater);
//         }
//     }
//     return maxwater;
// }

// optimal approach 2 pointer O(n)
int containerWithMostWater(vector<int> &height)
{
    int maxwater = 0;
    int lp = 0, rp = height.size() - 1;

    while (lp < rp)
    {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int curwater = w * ht;
        maxwater = max(maxwater, curwater);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxwater;
}
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << containerWithMostWater(height) << endl;

    return 0;
}