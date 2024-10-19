// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
#include <iostream>
#include <vector>
using namespace std;
// brute force linear search

// optimal approach binary search
int PeakIndex(vector<int> &mountain)
{
    int n = mountain.size();
    int st = 1;
    int end = n - 2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mountain[mid - 1] < mountain[mid] && mountain[mid] > mountain[mid + 1])
        {
            return mid;
        }
        if (mountain[mid - 1] < mountain[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> mountain = {0, 8, 10, 5, 2};

    cout << PeakIndex(mountain) << endl;

    return 0;
}