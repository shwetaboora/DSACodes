#include <iostream>
using namespace std;

int addBin(int a, int b)
{
    int ans = 0;
    int prevcarry = 0;
    int place = 1;

    while (a > 0 || b > 0 || prevcarry > 0)
    {
        int bitA = a % 10; // Get the last bit of a
        int bitB = b % 10; // Get the last bit of b

        // Calculate sum of bits and carry
        int sum = bitA + bitB + prevcarry;

        // Resulting bit will be sum % 2
        ans += (sum % 2) * place;

        // Calculate new carry
        prevcarry = sum / 2;

        // Move to the next bits
        a /= 10;
        b /= 10;
        place *= 10; // Move to the next place value
    }

    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << addBin(a, b) << endl;
    return 0;
}