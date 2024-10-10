#include <iostream>
using namespace std;

int main()
{
    // find the max record first day should be record breaker last day if bigger than all then that the record breaker
    int arr[] = {1, 2, 0, 7, 2, 0, 2, 2};
    int n = sizeof(arr) / sizeof(int);
    // arr[n] = -1;

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
            cout << "the record breaker days " << i << " ";
        }
        mx = max(mx, arr[i]);
        cout << "no of persons " << mx << endl;
    }
    cout << "total no of record breaker days " << ans << endl;

    return 0;
}