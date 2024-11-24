#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &mat)
{
    int m = mat.size(), n = mat[0].size();
    int srow = 0, scol = 0;
    int erow = m - 1, ecol = n - 1;
    vector<int> ans;
    while (srow <= erow && scol <= ecol)
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            ans.push_back(mat[srow][j]);
        }

        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            ans.push_back(mat[i][ecol]);
        }

        // bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            if (srow == erow)
            {
                break;
            }
            ans.push_back(mat[erow][j]);
        }

        // left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            ans.push_back(mat[i][scol]);
        }
        srow++;
        erow--;
        scol++;
        ecol--;
    }
    return ans;
}

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