#include <iostream>
using namespace std;
// https : // drive.google.com/file/d/1Y-dVpTnL_OVYNl-9MYbAvrup26xdIPUQ/view

// linear Search in 2d array
// cols are mandatory to define here whether you define row or not
bool LinearSearch(int mat[][3], int r, int c, int key)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    // n = rows, m = columns / rows- up down , columns - left right
    // int n, m;
    // cin >> n >> m;
    // int arr[n][m];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << arr[2][1] << endl;

    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 4;
    int col = 3;
    cout << LinearSearch(matrix, row, col, 8) << endl;

    return 0;
}