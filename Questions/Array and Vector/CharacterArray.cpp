#include <iostream>
using namespace std;

int main()
{
    // declaration
    int n = 8;
    char arr[n + 1]; //+1 because last char is taken extra for null or for getting to know that the sentence is ended
    // cin>>arr;
    // cout<<arr;
    // getline(arr,n); //for sentence input

    char array[20] = "dsfjajcbaafna";
    int i = 0;
    while (array[i] != '\0')
    {
        cout << array[i] << endl;
        i++;
    }

    cout << array[4] << endl;
    return 0;
}