#include <iostream>
using namespace std;
int main(){

	int principle, rate, time ;
	float si;

	cout<<"value of principle"<<endl;
	cin>>principle;

	cout<<"value of rate"<<endl;;
	cin>>rate;

	cout<<"value of time"<<endl;
	cin>>time;

	cout<<"Simple Interest is: ";
	si = principle*rate*time/100;

	cout<<si<<endl;

	return 0;
}