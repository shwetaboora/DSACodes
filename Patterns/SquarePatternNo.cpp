#include <iostream>
using namespace std;

int main()
{
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " "; // for no pattern
            // cout << "*" << " "; // for star pattern
        }
        cout << endl;
    }

    return 0;
}