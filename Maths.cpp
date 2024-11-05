#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
using namespace std;
// prime no counts/seive of eratosthenes
string isPrime(int n)
{

    for (int j = 2; j <= n; j++)
    {
        int IsPrime = true;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                IsPrime = false;
                break;
            }
        }
    }
    return "prime";
}
int countPrimes(int n)
{
    vector<bool> isPrime(n + 1, true);
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            count++;
            for (int j = i * 2; j < n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return count;
}

// digits in a number
void PrintDigits(int n)
{
    int count = 0;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        count++;
        cout << "digit- " << digit << endl;
        n = n / 10;
        cout << "count- " << count << endl;
        sum += digit;
    }
    cout << "sum- " << sum << endl;
}

// armstrong number - a no equals to sum of cube of its digits
bool isArmstrong(int n)
{
    int copyN = n;
    int sumOfCubes = 0;
    while (n != 0)
    {
        int dig = n % 10;
        sumOfCubes += (dig * dig * dig);
        n = n / 10;
    }
    return sumOfCubes == copyN;
}
// GCD/HCF - Greatest common Divisor/ euclid's algorithm
// int gcd(int a, int b)//O(min(a,b))
// {
//     int gcd = 1;
//     for (int i = 1; i < min(a, b); i++)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             gcd = i;
//         }
//     }
// }

// Euclid's Algorithm
int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    return a;
}
int gcdRec(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcdRec(b, a % b);
}

// LCM Least common Multiple
int lcm(int a, int b)
{
    int gcd = gcdRec(a, b);
    return (a * b) / gcd;
}

// reverse integer
int reverse(int x)
{
    int revNum = 0;
    while (x != 0)
    {
        int dig = x % 10;
        if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
        {
            return 0;
        }
        revNum = revNum * 10 + dig;
        x = x / 10;
    }
    return revNum;
}

// palindrome number
bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    int revNum = reverse(x);
    return x == revNum;
}
int main()
{
    // int n = 47;
    // cout << isPrime(n) << endl;
    // cout << countPrimes(n) << endl;

    // int n = 263453;
    // PrintDigits(n);
    // // count of digits in a no
    // cout << (int)(log10(n) + 1) << endl;

    // armstrong
    // int n = 153;
    // if (isArmstrong(n))
    // {
    //     cout << "armstrong no" << endl;
    // }
    // else
    // {
    //     cout << "not armstrong no" << endl;
    // }

    // gcd
    // cout << gcd(20, 24) << endl;

    // lcm
    // cout << lcm(20, 24) << endl;

    // reverse integer
    // cout << reverse(82736) << endl;

    // palindrome number
    cout << isPalindrome(34543) << endl;

    return 0;
}