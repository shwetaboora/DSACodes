#include <iostream>
using namespace std;

int main()
{
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1
    int n = 5;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     int f = 1;
    //     for (int j = n - i; j < n; j++)
    //     {

    //         cout << f << " ";
    //         f++;
    //     }
    //     for (int j = n - 1; j > n - i; j--)
    //     {

    //         cout << f - 2 << " ";
    //         f--;
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        // spaces = n-i-1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        // num1 = i+1;
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }
        // num2 = 0 to i-1|| i to 1
        for (int j = i; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}