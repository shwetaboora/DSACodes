#include <iostream>
#include <vector>
using namespace std;
// https://leetcode.com/problems/subsets-ii/
// https://leetcode.com/problems/subsets/
void printSubsets(vector<int> &arr, vector<int> &ans, int i) // O(2^n*n )
{
    if (i == arr.size())
    {
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // include
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i + 1);

    ans.pop_back(); // backtrack

    // for excluding the same subsets
    // int idx = i + 1;
    // while (idx < arr.size() && arr[idx] == arr[idx - 1])
    // {
    //     idx++;
    // }

    // exclude
    // for excluding the same subsets
    // printSubsets(arr, ans, idx);
    printSubsets(arr, ans, i + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> ans; // store ans
    // for excluding the same subsets
    // sort(arr.begin(),arr.end());
    printSubsets(arr, ans, 0);

    return 0;
}