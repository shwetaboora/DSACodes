#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    int arr[n] = {1, 6, 9, 3, 5};
    int array[n] = {4, 2, 6, 5, 0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == array[j])
            {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}