// https://leetcode.com/problems/search-a-2d-matrix/description/
#include <iostream>
#include <vector>
using namespace std;
bool searchInRow(vector<vector<int>> &matrix, int target, int row)
{
    int n = matrix[0].size();
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target == matrix[row][mid])
        {
            return true;
        }
        else if (target > matrix[row][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    // BS on tot rows
    int m = matrix.size(), n = matrix[0].size();
    int sr = 0, er = m - 1;
    while (sr <= er)
    {
        int mr = sr + (er - sr) / 2;
        if (target >= matrix[mr][0] && target <= matrix[mr][n - 1])
        {
            // found the row => BS on this row
            return searchInRow(matrix, target, mr);
        }
        else if (target >= matrix[mr][n - 1])
        {
            // down =>right
            sr = mr + 1;
        }
        else
        {
            // up=>left
            er = mr - 1;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;

    cout << searchMatrix(matrix, target) << endl;

    return 0;
}