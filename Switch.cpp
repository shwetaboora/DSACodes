#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "input a char" << endl;
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "Hello" << endl;
        break;
    case 'b':
        cout << "Shweta" << endl;
        break;
    case 'c':
        cout << "How are you" << endl;
        break;

    default:
        cout << "Bye" << endl;
        break;
    }
    return 0;
}