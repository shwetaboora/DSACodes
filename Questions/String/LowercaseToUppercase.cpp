#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a = "agsdbaDFSSfv";
    cout << 'a' - 'A' << endl;

    //  // convert into uppercase
    // for (int i = 0; i < a.size(); i++)
    // {
    //     if (a[i] >= 'a' && a[i] <= 'z')
    //     {
    //         a[i] -= 32;
    //     }
    // }
    // cout << a << endl;
    // // convert into lowercase
    // for (int i = 0; i < a.size(); i++)
    // {
    //     if (a[i] >= 'A' && a[i] <= 'Z')
    //     {
    //         a[i] += 32;
    //     }
    // }
    // cout << a << endl;

    transform(a.begin(), a.end(), a.begin(), ::toupper);
    cout << a << endl;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    cout << a << endl;

    return 0;
}