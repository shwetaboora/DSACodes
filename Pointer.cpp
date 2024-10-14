#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << &a << endl;
    int *aptr = &a;
    cout << aptr << endl;

    return 0;
}