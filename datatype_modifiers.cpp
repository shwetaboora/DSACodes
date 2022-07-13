//datatype modifiers 
// long, short, signed, unsigned
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a;
    cout<<sizeof(a)<<endl;
    cout<<INT_MIN<<endl; // -2^31
    cout<<INT_MAX<<endl; // 2^31 -1
    
    a = INT_MAX;

    // adding 1 to a
    cout<<"a "<<a<<endl; //a 2147483647   stores value of intmax 
    a = a + 1;
    cout<<"updated a "<<a<<endl; // updated a -2147483648   stores value of int min 
    // called wrap around if we add any no. above intmax then it will go to intmin the more value we add it will go further in int min if we add large no it will also jump in positive side also
    
    return 0;
}