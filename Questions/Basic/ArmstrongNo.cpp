#include <iostream>
using namespace std;

int main()
{
    // addition of cube of every digit of a no is Armstrong no.

    int n = 153;

    int sum = 0;
    int original = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += lastdigit * lastdigit * lastdigit;
        n = n / 10;
    }
    if (sum == original)
    {
        cout << "armstrong no" << endl;
    }
    else
    {
        cout << "not an armstrong no" << endl;
    }

    return 0;
}