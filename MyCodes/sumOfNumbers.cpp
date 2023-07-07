#include<iostream>
using namespace std;
 int main(int argc, char const *argv[])
 {
 	int n;
 	cout<<"enter the value of n: ";
 	cin>>n;

 	int initialval = 1;
 	int sum = 0;

 	while(initialval<=n){
 		sum = sum + initialval;
 		initialval = initialval + 1;	
 	}

 	cout<<"Sum = "<<sum<<endl;

 	return 0;
 }