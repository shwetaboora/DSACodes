#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 7, 4, 6, 8, 10, 11};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}