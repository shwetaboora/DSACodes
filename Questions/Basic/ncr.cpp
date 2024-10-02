#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r)
{
    int c;
    c = factorial(n) / ((factorial(n - r)) * factorial(r));
    return c;
}

int main()
{
    int n, r;

    cin >> n >> r;

    cout << ncr(n, r) << endl;

    return 0;
}