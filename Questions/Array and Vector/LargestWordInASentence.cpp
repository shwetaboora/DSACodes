#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currlen = 0, maxlen = 0;
    int st = 0, ed = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
                ed = st;
            }
            currlen = 0;
            st = i + 1;
        }
        else
        {
            currlen++;
        }
        if (arr[i] == '\0')
        {
            break;
        }

        i++;
    }

    cout << maxlen << endl;

    for (int i = 0; i < maxlen; i++)
    {
        cout << arr[i + ed];
    }
    cout << endl;
    return 0;
}