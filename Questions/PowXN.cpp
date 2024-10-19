// https://leetcode.com/problems/powx-n/description/
#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    // n = 0 -> 1/ x^0 = 1
    if (n == 0)
    {
        return 1.0;
    }
    // x = 0->0 / 0^0 = 0
    if (x == 0)
    {
        return 0.0;
    }
    // x = 1 -> 1/1^0 = 1
    if (x == 1)
    {
        return 1.0;
    }
    // x = -1 && pow even -> +1
    if (x == -1 && n % 2 == 0)
    {
        return 1.0;
    }
    // x = -1 && pow odd -> -1
    if (x == -1 && n % 2 != 0)
    {
        return -1.0;
    }

    long bf = n;
    // for negative n
    if (bf < 0)
    {
        x = 1 / x;
        bf = -bf;
    }
    double ans = 1;
    // main solution
    while (bf > 0)
    {
        if (bf % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        bf /= 2;
    }
    return ans;
}

int main()
{
    int x = 2.00000;
    int n = -2;
    cout << myPow(x, n);

    return 0;
}
