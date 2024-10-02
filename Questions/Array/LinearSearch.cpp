#include <iostream>
using namespace std;
// time complexity O(n) - linear
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n = 8;

    int arr[n] = {5, 6, 8, 2, 4, 9, 1, 3};

    int key;
    cin >> key;
    cout << linearSearch(arr, n, key) << endl;
    return 0;
}