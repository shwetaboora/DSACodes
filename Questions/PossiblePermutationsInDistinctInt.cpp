// permutation is a rearrangement of members of a sequence into a new sequence

// given an array nums of distinct integers return all possible permutations.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> ans;
void permute(vector<int> &a, int idx)
{
    if (idx == a.size())
    {
        ans.push_back(a);
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        swap(a[i], a[idx]);
        permute(a, idx + 1);
        swap(a[i], a[idx]);
    }
    return;
}

int main()
{
    int n = 3;
    vector<int> a(n);

    for (auto &i : a)
    {
        cin >> i;
    }
    permute(a, 0);
    //     sort(a.begin(), a.end());
    // do
    // {
    //     ans.push_back(a);
    // } while (next_permutation(a.begin(), a.end()));

    for (auto v : ans)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}