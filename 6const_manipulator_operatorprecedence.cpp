//const, endl, setw, which sign will work first 
#include<iostream>
#include<iomanip>
using namespace std;
  int main()
  {
  	int a = 21;
  	cout<<"the value of a was: "<<a<<endl;
  	a = 43;
  	cout<<"the value of a is: "<<a<<endl;

  	// Constants in C++ (we can not change the value of variable if we put const before variable)
  	const int b = 34;
  	cout<<"the value of b was "<<b<<endl;
  	//b = 23;// we will get an error as b is constant
  	//cout<<"the value of b is "<<b<<endl;

  	// Manipulators(helps in displaying data in a format) endl(iostream) and setw(it comes from iomanip)
  	int c = 34;//endl
  	cout<<"value of c "<<c<<endl;

  	int x = 2, y = 46, z = 3849;//setw
  	cout<<"the value of x without setw is: "<<x<<endl;
  	cout<<"the value of y without setw is: "<<y<<endl;
  	cout<<"the value of z without setw is: "<<z<<endl;

  	cout<<"the value of x with setw is: "<<setw(4)<<x<<endl;
  	cout<<"the value of y with setw is: "<<setw(4)<<y<<endl;
  	cout<<"the value of z with setw is: "<<setw(4)<<z<<endl;

  	//operator precedence (en.cppreference.com)
  	int d = 5, e = 2;
  	int f = ((((d*4)+e)-23)+56);//check which operator is first in the list. if both are at same then check associativity.
  	cout<<"the value of f: "<<f<<endl;

  	return 0;
  }