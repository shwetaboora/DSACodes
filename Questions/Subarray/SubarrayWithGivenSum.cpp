#include <iostream>
using namespace std;

int main()
{
    // given unsorted array of non negative no.s.find a subarray which adds to a given number s

    int s = 5;
    int arr[] = {1, 2, 3, 5, 7};
    int n = sizeof(arr) / sizeof(int);

    int i = 0;
    int j = 0;
    int st = -1;
    int en = -1;
    int sum = 0;

    while (j < n && sum + arr[j] <= s)
    {
        sum += arr[j];
        j++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }
    while (j < n)
    {
        sum += arr[j];
        while (sum > s)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;

    return 0;
}