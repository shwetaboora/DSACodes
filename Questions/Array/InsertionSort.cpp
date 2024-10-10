#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    int arr[n] = {3, 6, 8, 0, 3, 1, 7};

    // logic
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}