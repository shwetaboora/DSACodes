#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // declaration
    int n = 8;
    char arr[n + 1]; //+1 because last char is taken extra for null or for getting to know that the sentence is ended
    // cin>>arr;
    // cout<<arr;
    // getline(arr,n); //for sentence input // also have optional parameter delimiter(any thing where we want to stop taking input any word any special char etc)

    char str[] = {'a', 'b', 'c', '\0'};
    cout << str << endl; // constant pointers
    cout << strlen(str) << endl;

    char array[20] = "dsfjajcbaafna"; // string literals
    int i = 0;
    while (array[i] != '\0')
    {
        cout << array[i] << " ";
        i++;
    }
    cout << endl;

    cout << array[4] << endl;
    return 0;
}