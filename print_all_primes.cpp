#include<iostream>
using namespace std;

bool isprime(int n){
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
}

//printing all prime nos upto n
void printprimes(int N){
    for (int i = 2; i <= N; i++)
    {
        if (isprime(i))
        {
            cout<<i<<" ";
        }
        
    }
    
}

int main(){
    //checking if given no is prime or not.
    int n;
    cin>>n;


    printprimes(n);
    // if (isprime(n))
    // {
    //     cout<<n<<" is prime"<<endl;
    // }
    // else
    // {
    //     cout<<n<<" is not prime"<<endl;
    // }
    
    return 0;
}