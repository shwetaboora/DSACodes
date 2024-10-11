#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // find first repeating element in the array. element that occurs more than once and whose index of first occurence is the smallest
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    const int N = 10;
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }

    return 0;
}