// divide And Conquer problem

// divide till end then merge using 2 pointers which ever is smaller add that and move forward in that array

#include <iostream>
using namespace std;
// O(nlogn)

long long merge(int arr[], int l, int mid, int r)
{
    long long inv = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int left[n1];
    int right[n2]; // temp arrays

    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = right[j];
            inv += n1 - i;
            // left[i] > right[j] and i < j
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = left[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        k++;
        j++;
    }
    return inv;
}

long long mergerSort(int arr[], int l, int r)
{
    long long inv = 0;

    if (l < r)
    {
        int mid = (l + r) / 2;
        inv += mergerSort(arr, l, mid);
        inv += mergerSort(arr, mid + 1, r);

        inv += merge(arr, l, mid, r);
    }
    return inv;
}

int main()
{
    int arr[] = {3, 5, 6, 9, 1, 2, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long inversionCount = mergerSort(arr, 0, n - 1);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << inversionCount << endl;
    return 0;
}