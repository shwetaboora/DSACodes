// how to write an array program

#include<iostream>
using namespace std;

int main() {
    int arr[10];
    int n = 0;

    int max = 0;
    for (int i = 0; i < n ; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    cout << max << endl;

    return 0;
}