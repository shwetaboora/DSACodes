#include <iostream>
using namespace std;

int Subsets(int arr[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int arr[4] = {1, 2, 3, 4};

    cout << "All Subsets  " << Subsets(arr, 4) << endl;

    return 0;
}