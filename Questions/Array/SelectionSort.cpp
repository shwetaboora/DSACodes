#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {3, 6, 8, 0, 3, 1, 7};

    // logic
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                // swap(arr[i],arr[j]);
            }
        }
    }
    // printing
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}