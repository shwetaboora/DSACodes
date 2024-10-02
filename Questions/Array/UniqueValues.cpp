#include <iostream>
using namespace std;

int main()
{
    int n = 9;

    int arr[n] = {1, 2, 3, 2, 6, 5, 1, 3, 5};

    for (int i = 0; i < n; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}