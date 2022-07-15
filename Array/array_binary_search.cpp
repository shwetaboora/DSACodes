// we have to find a particular no in the array 

#include<iostream>
using namespace std;
int main(){
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n, mid, start, end, loc;
    loc= -1;
    start = 0;
    end = 7;
    cout<<"enter any no. to find: ";
    cin>>n;
    while (start<=end){
        mid = (start + end )/2;
        if (arr[mid] == n)
        {
            loc = mid;
            break;
        }
        else if (n<arr[mid])
        {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    if (loc == -1)
    {
        cout<<n<<"not found!"<<endl;
    }
    else{
        cout<<n<<"found at index"<<loc<<endl;
    }
    return 0;
}