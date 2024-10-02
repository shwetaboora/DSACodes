#include <iostream>
#include <cmath>
using namespace std;

void isprime(int n)
{
    if (n == 2 || n == 3)
    {
        cout << "is prime" << endl;
        return;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "is not prime" << endl;
            break;
        }
        else
        {
            cout << "is prime" << endl;
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;

    isprime(n);

    return 0;
}