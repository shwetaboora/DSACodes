#include<iostream>
using namespace std;

// finding a particular element in an array

int main(){
    int n, key;
    cin>>n;
    
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    // element we want to search
    cout<<"element you want to find ";
    cin>>key;

    //find out the index of that element by traversing the array
    //linear search algorithm
    int i;
    for ( i = 0; i <= n-1; i++)
    {
        if (a[i]==key)
        {
            cout<<key<<" found at "<<i<<" index";
            break;
        }  
    }
    if (i==n)
    {
        cout<<key<<"is not found "<<endl;
        
    }

    return 0;
}