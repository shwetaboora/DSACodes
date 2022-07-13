/*
*****
****
***
**
*
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){

  int n = 5;

 for (int i = n; i >=1 ; i--)
  {
    for (int k = i; k>=1 ;k--)
    {
      cout<<"*";
    }
    cout<<endl;
  } 
  return 0;
}