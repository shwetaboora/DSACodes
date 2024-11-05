#include <iostream>
using namespace std;

int main()
{
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

    // spiral order print
    int rowS = 0, rowE = n - 1, columnS = 0, columnE = m - 1;

    while (rowS <= rowE && columnS <= columnE)
    {
        // for row start

        for (int col = columnS; col <= columnE; col++)
        {
            cout << arr[rowS][col] << " ";
        }
        rowS++;

        // for col end
        for (int row = rowS; row <= rowE; row++)
        {
            cout << arr[row][columnE] << " ";
        }
        columnE--;

        // for row end
        for (int col = columnE; col >= columnS; col--)
        {
            cout << arr[rowE][col] << " ";
        }
        rowE--;

        // for col start
        for (int row = rowE; row >= rowS; row--)
        {
            cout << arr[row][columnS] << " ";
        }
        columnS++;
    }

    return 0;
}