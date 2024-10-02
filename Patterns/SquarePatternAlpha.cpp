#include <iostream>
using namespace std;

int main()
{
    // A B C D
    // A B C D
    // A B C D
    // A B C D
    int n = 4;

    for (int i = 1; i <= n; i++) // outer loop
    {
        char ch = 'A';
        for (int j = 1; j <= n; j++) // inner loop - line start
        {
            cout << ch << " "; // for no pattern
            // cout << "*" << " "; // for star pattern
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}