//finding the min and max no
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int min_so_far = INT_MAX;
    int max_so_far = INT_MIN;

    int no;
    // without storing all the no
    for (int i = 0; i < n; i++)
    {
        cin>>no;
        if (no<min_so_far)
        {
            min_so_far = no;
        }
        if (no>max_so_far)
        {
            max_so_far = no;
        }
    }

    cout<<"Max No "<<max_so_far<<endl;
    cout<<"Min No "<<min_so_far<<endl;
    return 0;
}