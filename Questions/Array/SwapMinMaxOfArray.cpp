#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n = 8;

    int arr[n] = {1, 2, 3, 4, 5, 6, 8, 9};

    int maxN = INT_MIN;
    int minN = INT_MAX;
    int maxI = -1;
    int minI = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxN)
        {
            maxN = arr[i];
            maxI = i;
        }
        if (arr[i] < minN)
        {
            minN = arr[i];
            minI = i;
        }
    }

    if (maxI != -1 && minI != -1)
    {
        swap(arr[maxI], arr[minI]);
    }

    cout << maxN << endl;
    cout << minN << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}