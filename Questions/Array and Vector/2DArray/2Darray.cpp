#include <iostream>
using namespace std;
// https : // drive.google.com/file/d/1Y-dVpTnL_OVYNl-9MYbAvrup26xdIPUQ/view
int main()
{
    // n = rows, m = columns / rows- up down , columns - left right
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}