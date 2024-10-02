#include <iostream>
using namespace std;

int main()
{

    //     1
    //    212
    //   32123
    //  4321234
    // 543212345
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        int k = i;
        for (int j = n - i; j < n; j++)
        {

            cout << k;
            k--;
        }
        k = 2;
        for (int j = n; j < n + i - 1; j++)
        {

            cout << k;
            k++;
        }

        cout << endl;
    }

    return 0;
}