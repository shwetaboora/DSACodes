#include <iostream>
using namespace std;

int TilingWays(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }
    return TilingWays(n - 1) + TilingWays(n - 2);
}

int main()
{
    cout << TilingWays(4) << endl;

    return 0;
}