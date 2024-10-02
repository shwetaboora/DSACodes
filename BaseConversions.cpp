#include <iostream>
using namespace std;

int BinToDec(int binNum)
{
    int ans = 0, pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;
        binNum /= 10;
        pow *= 2;
    }
    return ans; // decimal form
}
int OctToDec(int octNum)
{
    int ans = 0, pow = 1;
    while (octNum > 0)
    {
        int rem = octNum % 10;
        ans += rem * pow;
        octNum /= 10;
        pow *= 8;
    }
    return ans; // decimal form
}
int decToBin(int decNum)
{
    int ans = 0, pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);

        pow *= 10;
    }
    return ans; // binary number
}

int decToOct(int decNum)
{
    int ans = 0, pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 8;
        decNum /= 8;
        ans += (rem * pow);

        pow *= 10;
    }
    return ans; // binary number
}

string decToHexaDec(int decNum)
{
    string ans = "";
    while (decNum > 0)
    {
        int rem = decNum % 16;
        decNum /= 16;
        if (rem <= 9)
        {
            ans = char('0' + rem) + ans;
        }
        else
        {
            ans = char('A' + rem - 10) + ans;
        }
    }
    return ans; // binary number
}
int HexadecToDec(string hexaNum)
{
    int ans = 0, pow = 1;
    int s = hexaNum.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if (hexaNum[i] >= '0' && hexaNum[i] <= '9')
        {
            ans += pow * (hexaNum[i] - '0');
        }
        else if (hexaNum[i] >= 'A' && hexaNum[i] <= 'F')
        {
            ans += pow * (hexaNum[i] - 'A' + 10);
        }
        pow *= 16;
    }

    return ans; // Decimal number
}

int main()
{
    // int n; //for other nos
    // string n; // for hexadecimal
    cout << BinToDec(100101) << endl;
    cout << OctToDec(17) << endl;
    cout << decToBin(10) << endl;
    cout << decToOct(100) << endl;
    cout << decToHexaDec(100) << endl;
    cout << HexadecToDec("1CF") << endl;
    return 0;
}