#include <iostream>
using namespace std;

int main()
{
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
    int n = 4;

    // for (int i = 1; i <= n; i++)
    // {
    //     int num = i;
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << num << " ";
    //         num--;
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {

            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}