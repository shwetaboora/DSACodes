/* 
543212345
 4321234
  32123
   212
    1
   212
  32123
 4321234
543212345
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){

  int n = 5;

 for (int i = n; i >=2; i--)
  {

    for (int j = 1; j <= (n-i); j++)
    {
      cout<<" ";
    }
    for (int l = i; l >=1; l--)
    {
      cout<< l;
    }

    for (int r=2; r<=i; r++){
      cout<<r;  
         
    }
    cout<<endl;
  } 

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= (n-i); j++)
    {
      cout<<" ";
    }
    for (int l = i; l >=1; l--)
    {
      cout<< l;
    }

    for (int r=2; r<=i; r++){
      cout<<r;  
    }
    cout<<endl;
  }
  return 0;
}