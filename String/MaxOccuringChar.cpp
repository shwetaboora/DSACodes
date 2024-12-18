#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "cyjhvdjdjfhb";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    char ans = 'a';

    int maxnum = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxnum)
        {
            maxnum = freq[i];
            ans = i + 'a';
        }
    }
    cout << maxnum << " " << ans << endl;

    return 0;
}