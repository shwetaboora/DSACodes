#include <iostream>
using namespace std;

string moveAllXAtEnd(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = moveAllXAtEnd(s.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

int main()
{
    cout << moveAllXAtEnd("adxnaixxbbuanxv") << endl;

    return 0;
}