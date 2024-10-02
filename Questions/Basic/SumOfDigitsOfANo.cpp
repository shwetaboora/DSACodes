#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int last = n % 10;
        n = n / 10;
        sum += last;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n) << endl;

    return 0;
}