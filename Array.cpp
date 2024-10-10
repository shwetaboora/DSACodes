#include <iostream>
using namespace std;

int main()
{
    // static - compile time, int arr[5](fixed), stack

    // int array[4] = {10, 20, 30, 40};
    // // array[0] = 10;
    // // array[1] = 20;

    // static memory allocation
    // // last index will be n-1
    // cout << array[3] << endl;

    int n;
    cin >> n;

    int array[n];
    // cin>>array[0];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int size = sizeof(array) / sizeof(int);
    cout << "size" << size << endl;

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }

    // subarray - continous part of the array
    // no of subarrays of an array with n elements = nC2 + n= (n!/r!*(n-r)!) + n = n*(n+1)/2

    // subsequences - a subsequence is a sequence that can be derived an array by selecting zero or more elements, without changing the order of the remaining elements
    // not continous but the order will be same
    // no of subsequences of an array = 2^n

    // every subarray is a subsequence but every subsequence is not a subarray

    return 0;
}