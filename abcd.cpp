/*print the following pattern
ABCDEF
ABCDE
ABCD
ABC
AB
A
*/
#include<iostream>
using namespace std;
void printABCDpattern(int n){
    for (int i = 1; i <= n; i++)
    {
        int cnt_alphabets = n - i + 1;
        char alphabet = 'A';

        for (int j = 1; j <= cnt_alphabets; j++)
        {
            cout<<alphabet;
            alphabet = alphabet + 1;
        }
        cout<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    printABCDpattern(n);
    return 0;
}