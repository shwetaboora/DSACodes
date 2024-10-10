#include <iostream>
using namespace std;

int main()
{
    // an array from which we have to find longest subarray and also should be arithmetic subarray (same difference between consecutive elements)

    int arr[] = {10, 7, 4, 6, 8, 10, 11};
    int n = sizeof(arr) / sizeof(int);

    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;

    int cur = 2;
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            cur++;
        }
        else
        {
            pd = arr[j] - arr[j - 1];
            cur = 2;
        }
        ans = max(ans, cur);
        j++;
    }
    cout << ans << endl;
    return 0;
}