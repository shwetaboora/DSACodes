#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 2, 5, 3, 8, 9, 6};
    int n = sizeof(arr) / sizeof(int);

    int cur = 0;

    for (int i = 0; i < n; i++)
    {
        cur = 0;
        for (int j = i; j < n; j++)
        {
            cur += arr[j];
            cout << cur << endl;
        }
    }

    return 0;
}