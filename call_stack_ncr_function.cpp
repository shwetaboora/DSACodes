// we have to find the factorial with the logic of call stack
// call stack-- the stack is a box in which memory stores the function goes at first will be removed at last
// and the function goes at last will be removed first.
// at the end stack is always empty.

#include<iostream>
using namespace std;
int factorial(int n){
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans*i;
    }
    return ans;
}

int ncr(int n, int r ){
    int ans = factorial(n)/(factorial(n - r)*factorial(r));
    return ans;
}
int main(){
    //ncr and factorial of a no

    cout<<factorial(5)<<endl;
    cout<<ncr(5,2)<<endl;
    
    return 0;
}