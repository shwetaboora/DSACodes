// how to create and call a function 
#include<iostream>
using namespace std;

void sayhello(){
    cout<<"hello everyone!";
}

int factorial(int n){
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans = ans*i;
    }
    return ans;
}

int main(){
    cout<<"before function"<<endl;
    sayhello();
    cout<<endl<<"after function"<<endl;

    // 2nd part
    int n;
    cout<<"enter number";
    cin>>n;
    factorial(n);
    cout<<factorial(n)<<endl;
    return 0;
}