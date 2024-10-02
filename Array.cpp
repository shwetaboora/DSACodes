#include <iostream>
using namespace std;

int main()
{
    // int array[4] = {10, 20, 30, 40};
    // // array[0] = 10;
    // // array[1] = 20;

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

    return 0;
}