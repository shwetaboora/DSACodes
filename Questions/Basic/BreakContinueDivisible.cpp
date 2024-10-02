#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    int n;
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " non-prime" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout << "prime" << endl;
    }

    return 0;
}