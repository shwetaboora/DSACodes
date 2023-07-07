#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int n;
	cout<<"enter the digits"<<endl;
	cin>>n;

	int sum = 0;

	while(n>0){
		int lastDigit = n%10;

		sum = sum + lastDigit;

		n = n/10;
	}


	cout<<"Sum of digits: "<<sum<<endl;

	return 0;
} 