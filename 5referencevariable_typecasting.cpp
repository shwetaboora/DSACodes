//::, double, long double, sizeof, INT_MAX, INT_MIN, long, short, signed, unsigned, &, 
#include<iostream>
#include<climits>

using namespace std;
  int c = 45;
  int main()
  { //build in data types
  	int a,b,c;
  	cout<<"enter the value of a:"<<endl;
  	cin>>a;
  	cout<<"enter the value of b:"<<endl;
  	cin>>b;
  	c = a + b;
  	cout<<"the sum is "<<c<<endl;
  	cout<<"the global c is "<<::c<<endl;//::c shows global value so :: is used for global value.

  	//float, double, long double literals
  	float d=21.4f;// putting f for showing that this value is float as by default this value is double.
  	long double e=21.4l;// putting l for showing that this value is long double
  	cout<<"the size of 21.4 is "<<sizeof(21.4)<<endl;
  	cout<<"the size of 21.4f is "<<sizeof(21.4f)<<endl;
  	cout<<"the size of 21.4F is "<<sizeof(21.4F)<<endl;
  	cout<<"the size of 21.4l is "<<sizeof(21.4l)<<endl;
  	cout<<"the size of 21.4L is "<<sizeof(21.4L)<<endl;
  	cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;
    cout<<"shows max integer value that can be stored inside an integer"<<INT_MAX<<endl;
    cout<<"shows min integer value that can be stored inside an integer"<<INT_MIN<<endl;
    a = INT_MAX;
    // Data type modifires 
    // long, short, signed, unsigned
    // long- increase the size
    // short- reduce the size
    // signed- 1 bit less
    // unsigned- 1 bit more(only for +ve intergers)

  	//reference variables
  	// used for using a value in other variable also 
  	// me---> shweta -----> boora
  	float shweta = 45;
  	float & boora = shweta;
  	cout<<shweta<<endl;
  	cout<<boora<<endl;

  	// typecasting
  	//converting a data type into another int to float or dlouble to int etc.
  	int m = 32;
  	float n = 34.43;
  	cout<<"the value of m is "<<(float)m<<endl;
  	cout<<"the value of m is "<<int(m)<<endl;

  	cout<<"the value of n is "<<(int)n<<endl;
  	cout<<"the value of n is "<<int(n)<<endl;
  	int o = int (n);
  	cout<<"the experssion is "<<m + n<<endl;
  	cout<<"the experssion is "<<m + int(n)<<endl;
  	cout<<"the experssion is "<<m + (int)n<<endl;

  	return 0;
  }