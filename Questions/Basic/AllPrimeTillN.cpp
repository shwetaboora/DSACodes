#include <iostream>
#include <cmath>
using namespace std;

void AllPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        bool isprime = true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    AllPrime(n);

    return 0;
}