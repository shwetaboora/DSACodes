// https://leetcode.com/problems/first-missing-positive/description/
#include <iostream>
using namespace std;

int main()
{
    // given an array of positive integers including 0 find the smallest positive number missing from the array
    int arr[] = {0, -9, 1, 3, -4, 5};
    int n = sizeof(arr) / sizeof(int);

    const int N = 1e6 + 2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            check[arr[i]] = 1;
        }
    }
    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}