#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// Static Allocation  done during compile time
	int b[100];
	cout<<sizeof(b)<<endl;
	cout<<b<<endl;// symbol of table

	// b can not be over written, b is a part of read only memory.

	// Dynamic Allocation (runtime on the fly)
	int n;
	cin>>n;
	int *a = new int[n];
	cout<<sizeof(a)<<endl;
	cout<<a<<endl;// variable that is created inside the static memory

	// no change
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
		cout<<a[i]<<" ";
	}

	// freeup the sapce
	delete [] a;

	return 0;
}