#include <iostream>
using namespace std;

int main()
{

    // A
    // B C
    // D E F
    // G H I J
    // K L M N O
    int n = 5;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}