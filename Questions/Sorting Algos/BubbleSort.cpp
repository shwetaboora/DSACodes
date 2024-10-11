#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {3, 6, 8, 0, 3, 1, 7};

    // logic
    // int counter = 1;
    // while (counter < n)
    // {
    //     for (int i = 0; i < n - counter; i++)
    //     {
    //         if (arr[i] > arr[i + 1]) // <  for descending
    //         {
    //             int temp = arr[i];
    //             arr[i] = arr[i + 1];
    //             arr[i + 1] = temp;
    //         }
    //     }
    //     counter++;
    // }

    // O(n^2)
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1]) // <  for descending
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }

    // O(n^2) a bit optimised
    for (int i = 0; i < n - 1; i++)
    {
        bool isswap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // <  for descending
            {
                swap(arr[j], arr[j + 1]);
                isswap = true;
            }
        }
        if (!isswap)
        {
            return;
        }
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}