// finding the smallest and the largest no. in the array.
#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n, key;
    cin>>n;
    int a[100];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int smallest = INT_MIN;
    int largest = INT_MAX;

    for (int  i = 0; i < n; i++)
    {

        /*
        if (a[i] > largest){
            largest = a[i];
        }
        if (a[i] < smallest){
            smallest = a[i];
        }
        */
        largest = max(largest, a[i]);
        smallest = min(smallest, a[i]);
        
    }
    cout<<"largest "<<largest<<endl;
    cout<<"smallest "<<smallest<<endl;
    
return 0;
}