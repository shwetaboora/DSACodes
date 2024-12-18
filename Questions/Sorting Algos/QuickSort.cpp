#include <iostream>
using namespace std;
// O(N^2)//worst case
// O(nlogn)//best case
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}

void QuickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        QuickSort(arr, l, pi - 1);
        QuickSort(arr, pi + 1, r);
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    QuickSort(arr, 0, 4);
    for (int k = 0; k < 5; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}