#include<iostream>
using namespace std;
//scope --> defined for variables (accessible -> lifetime and visibility)
// local scope
// global scope

int x = 100;
int main(){
    int x = 10;
    cout<<x<<endl;
    for ( x = 0; x <= 5; x++)
    {
        cout<<"loop scope "<<x<<endl;
    } 
    cout<<"local x "<<x<<endl;
    cout<<"global x "<<::x<<endl;
  return 0;
    
}