#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {-1, 4, -6, 7, -4};
    int n = sizeof(arr) / sizeof(int);

    // brute Force O(n^3)
    // int maxsum = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += arr[k];
    //         }
    //         // cout << endl;
    //         maxsum = max(maxsum, sum);
    //     }
    // }
    // cout << maxsum << endl;

    // cumulative sum approach O(N^2)
    // int currSum[n + 1];
    // currSum[0] = 0;
    // int maxsum = INT_MIN;
    // for (int i = 1; i <= n; i++)
    // {
    //     currSum[i] = currSum[i - 1] + arr[i - 1];
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         sum = currSum[i] - currSum[j];
    //         maxsum = max(sum, maxsum);
    //     }
    // }
    // cout << maxsum << endl;

    // Kadane's Algorithm most optimized approach for this
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    cout << maxsum << endl;

    return 0;
}