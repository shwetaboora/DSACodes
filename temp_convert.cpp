//celsius fahrenheit conversion
#include<iostream>
using namespace std;

int main(){

    int f = 0;
    int c;

    while (f<=300)
    {
        c = (5*(f-32))/9; // formula of temperature
        cout<<f<<" "<<c<<endl;
        f = f + 20;
    }
return 0;
}