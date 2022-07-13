#include<iostream>
using namespace std;
    int main(){

        // check if a given no. is prime
        int n;
        cin>>n;
        int i;
        for (i = 2; i <=n-1; i++)
        {
            if (n%i==0)
            {
                cout<<n<<" is not prime"<<endl;
                break;// this will bring us out of the for loop
            
            }
            
        }
        if(i==n)
        {
            cout<<n<<" is prime"<<endl;
        }
        
        return 0;
    }