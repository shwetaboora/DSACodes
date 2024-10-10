#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // dynamic memory - runtime , vector<int> (resize),heap
    vector<int> vec;
    vector<int> vect = {1, 2, 3};
    vector<int> vecto(3, 0);
    // dynamic in memory allocation
    vect.pop_back();
    cout << vect.size() << endl;
    cout << vect.capacity() << endl;
    vect.push_back(5);
    cout << vect.front() << endl;
    cout << vect.back() << endl;
    cout << vect.at(1) << endl;

    for (int val : vect)
    {
        cout << val << " ";
    }

    return 0;
}