#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // in 2d vectors we have advantage of storing extra elements in a particular row
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6, 10, 11}, {7, 8, 9}};
    // int row = mat.size();
    // int col = mat[i].size();
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << mat[0][0] << endl;
    return 0;
}