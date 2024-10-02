#include <iostream>
using namespace std;
// firstly array elements should be in sorted order
// time complexity = O(lognbase2)
int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n = 8;

    int arr[n] = {1, 2, 3, 4, 5, 6, 8, 9};

    int key;
    cin >> key;

    cout << binarySearch(arr, n, key) << endl;
    return 0;
}