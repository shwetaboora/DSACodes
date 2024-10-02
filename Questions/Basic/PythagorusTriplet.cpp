#include <iostream>
using namespace std;

bool triplet(int n, int m, int p)
{
    int a = max(n, max(m, p));
    int b, c;
    if (a == n)
    {
        b = m;
        c = p;
    }
    else if (a == m)
    {
        b == n;
        c == p;
    }
    else
    {
        b == n;
        c == m;
    }

    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    if (triplet(n, m, p))
    {
        cout << "pythagorean triplet" << endl;
    }
    else
    {
        cout << "not a pythagorean triplet" << endl;
    }
    return 0;
}