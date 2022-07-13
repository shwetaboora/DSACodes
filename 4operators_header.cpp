//+, -, *, /, %, ++, --, ==, !=, >=, <=, <, >, &&, ||
// arithmetic, comparison, logical operators
// there are two types of header files:
// 1. system header files: it comes with the compiler
#include<iostream>
// 2. user defined header files; it is written by the programmer
// #include "this.h" --> this will produce an error if this.h is not present in the current directory

using namespace std;
int main()
{
	int a=2, b=3;
	//operators in C++
	cout<<"operators in C++: "<<endl;
	// Arithmetic operators
	cout<<"arithmetic operators"<<endl;
	cout<<"the value of a + b is "<<a+b<<endl;
	cout<<"the value of a - b is "<<a-b<<endl;
	cout<<"the value of a * b is "<<a*b<<endl;
	cout<<"the value of a / b is "<<a/b<<endl;
	cout<<"the value of a % b is "<<a%b<<endl;
	cout<<"the value of a++ is "<<a++<<endl;
	cout<<"the value of a-- is "<<a--<<endl;
	cout<<"the value of ++a is "<<++a<<endl;
	cout<<"the value of --a is "<<--a<<endl;
	cout<<endl;

	// assignment operators 
	cout<<"assignment operators"<<endl;
	//int a=3
	//char d='d'
	cout<<"int"<<endl;
	cout<<"char"<<endl;
	cout<<endl;

	//comparison operators
	cout<<"comparison operators"<<endl;
	cout<<"the value of a == b is "<<(a==b)<<endl;
	cout<<"the value of a != b is "<<(a!=b)<<endl;
	cout<<"the value of a >= b is "<<(a>=b)<<endl;
	cout<<"the value of a <= b is "<<(a<=b)<<endl;
	cout<<"the value of a < b is "<<(a<b)<<endl;
	cout<<"the value of a > b is "<<(a>b)<<endl;
	cout<<endl;

	//logical operators (bros of comparison operators)
	cout<<"logical operators"<<endl;
	cout<<"the value of this logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
	cout<<"the value of this logical or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
	cout<<"the value of this logical not operator (!(a==b)) is "<<(!(a==b))<<endl;
	
		return 0;
}