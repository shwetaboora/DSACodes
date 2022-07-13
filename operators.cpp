// operators in c++
#include<iostream>
using namespace std;

int main(){

    //comma operator
    int a,b,c;

    //assignment operators
    a = 10;
    b = 20;
    c = 30;

    // logical operators
    if (c>a and c>b)
    {
        cout<<"C is largest "<<endl;
    }

    // ternary operator
    int x = c%2 == 0? 1:0;
    cout<<x <<endl;
    c%2==0?cout<<"even":cout<<"odd";
    cout<<endl;

    // bitwise operators
    x = 5;
    int y = 7;
    cout<<" and "<<(x&y)<<endl;
    cout<<" or "<<(x|y)<<endl;
    cout<<" xor "<<(x^y)<<endl;

    // shift operator
    x = x<<2;
    cout<< x<<endl;
    cout<<(y>>1)<<endl;
    
    //unary operators

    // (address of) operator
    cout<<(&x)<<endl;

    //post increment / decrement operators
    a = 10;
    int z = a++;
    cout << z <<endl;
    z = ++a;
    cout<<z<<endl;

    //compund assignment operators
    a = 10;
    a *= 3;
    cout<<"a after multiply "<<a<<endl;
    a %= 5;
    cout<<"a after modulo "<<a<<endl;

    b = 5;
    b <<=1;
    cout<<"b after left shift "<<b<<endl;
    
 return 0;   
}