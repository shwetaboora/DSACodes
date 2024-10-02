#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "input no.s" << endl;
    cin >> n1 >> n2;

    char op;
    cout << "input operator " << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    case '%':
        cout << n1 % n2 << endl;
        break;
    default:
        cout << "enter any other operator" << endl;
        break;
    }
    return 0;
}