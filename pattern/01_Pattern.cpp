// 0
// 10
// 010
// 1010
// 01010
// 101010

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int value = i%2==0?1:0;
        //print i values in ith lines
        for (int cnt=1;cnt<=i;cnt++)
        {
            cout<<value;
            value = 1 - value;
        }
        cout<<endl;
    }
    
return 0;
}