// glo--> global variable
# include <iostream>
using namespace std;

 int glo = 6;
 void sum(){
 	int a;
 	cout<< glo;
 }

  int main()
  {
  	int glo=4;
  	glo=43;
  	sum();
  	cout<<glo;
  	return 0;
  }