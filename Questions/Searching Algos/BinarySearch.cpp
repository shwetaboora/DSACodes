#include <iostream>
using namespace std;
// firstly array elements should be in sorted order
// we find mid of array then compare if the target is equal bigger or smaller then the mid
// if equal return index
// if bigger move start to mid+1 and again repeat the process of finding mid and comparing
// if smaller then move end to mid-1 and again repeat the process of finding mid and comparing
// time complexity = O(lognbase2) / O(logn)

// iterative approach this one is more better than recursive one as its space comp is O(1)
int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        // int mid = (s + e) / 2;
        int mid = s + (e - s) / 2; // optimization of binary search
        // for overflow condition int_max +int_max then it will overflow but in this it will not
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

// recursive approach this one not better as its time comp is same as O(logn) but space comp is bigger o(logn) its not optimized
int RecbinarySearch(int arr[], int key, int s, int e)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return RecbinarySearch(arr, key, mid + 1, e);
        }
        else if (arr[mid] > key)
        {
            return RecbinarySearch(arr, key, s, mid - 1);
        }
        else
        {
            return mid;
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
    cout << RecbinarySearch(arr, key, 0, n - 1) << endl;
    return 0;
}