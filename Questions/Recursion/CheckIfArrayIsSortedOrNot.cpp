#include <iostream>
using namespace std;

bool sorted(int arr[], int n) // TC- O(n) SC- O(n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    // bool restArr = sorted(arr + 1, n - 1);
    // return (arr[0] < arr[1] && restArr);
    return (arr[n - 1] >= arr[n - 2] && sorted(arr, n - 1));
}
int main()
{
    int arr[] = {3, 1, 6, 78};
    cout << sorted(arr, 4) << endl;

    return 0;
}