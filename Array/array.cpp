// how to write an array program

#include<iostream>
using namespace std;

int main() {
    // //initialisation of an array
    //  int a[10] = {0};

    //  // size of
    //  cout<<sizeof(a)<<endl;

    //  // no. of elements in an array
    // int n = sizeof(a)/sizeof(int);
    // cout<<n<<endl;

    // //taking all input from user
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>a[i];
    // }

    // //update a single index
    // a[8]=100;

    // // printing all first 10 elements
    // for (int i = 0; i < 10; i++)
    // {
    //    cout<<a[i]<<" ,";
    // }


    int arr[10] = {1, 2, 3, 4, 5};
    cout << arr << endl; //address of first memory block where array is stored

    return 0;
}