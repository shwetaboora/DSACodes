#include <iostream>
using namespace std;
// time complexity O(n) - linear
int RevereseArray(int arr[], int size)
{
    int s = 0, e = size - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    // 2 pointer Approach
    int n = 8;

    int arr[n] = {5, 6, 8, 2, 4, 9, 1, 3};
    int size = sizeof(arr) / sizeof(int);
    RevereseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}