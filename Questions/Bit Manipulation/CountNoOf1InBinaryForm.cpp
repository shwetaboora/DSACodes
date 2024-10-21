#include <iostream>
using namespace std;

int noOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int main()
{

    cout << "No of ones in a binary form of a no  -  " << noOfOnes(14) << endl;

    return 0;
}