#include <iostream>
using namespace std;

int* fun(){

	int *a = new int[5];
	a[0] = 11;
	a[1] = 2;
	//int a[] = {1,2,3,4,5};
	cout<<a<<endl;// address
	cout<<0<<endl;// value 1
	cout<< a[0] <<endl;

	return a;
}

int main(){

	int *b = fun();
	cout << b <<endl;// same address
	cout<<b[0]<<endl;// 1,garbage value, segmentation fault

	//clear the array 
	delete [] b ;

	return 0;
}