#include <iostream>
using namespace std;

bool isPowerOf2(int n)
{
    return (n && !(n & n - 1)); // n&& is added for base case n = 0
}

int main()
{

    cout << "Is Power of 2 -  " << isPowerOf2(14) << endl;

    return 0;
}