#include <iostream>
#include <climits>
#include <vector>
using namespace std;
bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
    int painters = 1, time = 0;
    for (int i = 0; i < n; i++)
    {

        if (time + arr[i] <= maxAllowedPages)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            time = arr[i];
        }
    }
    return painters <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m) // O(logn * n)
{
    int sum = 0, maxVal = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int ans = -1;
    int st = maxVal, end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;

    return 0;
}