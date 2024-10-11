#include <iostream>
using namespace std;
// brute force - O(n^2)
// bool pairsum(int arr[], int n, int k)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == k)
//             {
//                 cout << i << " " << j << endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// optimal approach O(n)
// two pointer  approach
bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;

    while (low < high)
    {
        if (arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if (arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

int main()
{
    // check if there exists two elements in an sorted array such that their sum is equal to given k
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;
    int n = sizeof(arr) / sizeof(int);

    cout << pairsum(arr, n, k) << endl;

    return 0;
}