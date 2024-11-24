#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {0, 2, 5, 3, 8, 9, 6};

    int maxno = INT_MIN;
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxno)
        {
            // maxno  = max(maxno,arr[i]);
            maxno = arr[i];
            cout << maxno << " ";
        }
        else
        {
            cout << maxno << " ";
        }
    }
    cout << endl;
    cout << maxno << endl;
    return 0;
}