// https://leetcode.com/problems/permutation-in-string/description/
#include <iostream>
using namespace std;

bool isFreqSame(int Freq[], int Freq1[])
{
    for (int i = 0; i < 26; i++)
    {
        if (Freq[i] != Freq1[i])
        {
            return false;
        }
    }
    return true;
}
bool checkInclusion(string s1, string s2)
{
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        // int idx = s1[i] - 'a';
        // freq[idx]++;
        freq[s1[i] - 'a']++;
    }
    int windsize = s1.length();
    for (int i = 0; i < s2.length(); i++)
    {
        int windIdx = 0, idx = i;
        int Windfreq[26] = {0};
        while (windIdx < windsize && idx < s2.length())
        {
            Windfreq[s2[idx] - 'a']++;
            windIdx++;
            idx++;
        }
        if (isFreqSame(freq, Windfreq))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string str = "ab", str1 = "eidbaooo";
    cout << checkInclusion(str, str1) << endl;

    return 0;
}