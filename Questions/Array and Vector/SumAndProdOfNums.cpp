#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n = 8;

    int arr[n] = {1, 2, 3, 4, 5, 6, 8, 9};
    int sum = 0;
    int prod = 1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        prod *= arr[i];
    }

    cout << "sum " << sum << endl;
    cout << "prod " << prod << endl;

    return 0;
}