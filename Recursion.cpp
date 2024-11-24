#include <iostream>
using namespace std;
// TC - total calls *work done in each call
// SC - depth of the recursive tree*space or memory in each call || height of the call stack*space or memory in each call
int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int prevSum = Sum(n - 1);
    return n + prevSum;
}

int Power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    int prevPower = Power(n, p - 1);
    return n * prevPower;
}

int factorial(int n) // O(n)
{
    if (n == 0)
    {
        return 1;
    }

    // int prevFact = factorial(n - 1);

    return n * factorial(n - 1);
}

// nth Fibonacci number

int fibonacci(int n) // TC- O(2^n) SC- O(n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    // when a function calls itself to make the problem smaller
    int n = 4;
    cout << Sum(n) << endl;

    int p = 3;
    cout << Power(n, p) << endl;

    cout << factorial(n) << endl;
    cout << fibonacci(n) << endl;

    return 0;
}