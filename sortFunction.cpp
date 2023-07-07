#include <iostream>
#include <algorithm>
using namespace std;

// for decreasing order we have to define a comparator function
bool compare(int a, int b) {
	cout << "comparing" << a << "and" << b << endl;
	return a < b; // for ascending order
	// return a>b; // for decending order
}
int main(int argc, char const *argv[])
{


	int end, key;
	cin >> end;

	int a[1000];

	for (int i = 0; i < end; i++)
	{
		cin >> a[i];
	}

	//sorting an array using sort() function
	// there are various parameters in sort function
	// container - it can be any thing like array or vector and more..
	// start staring point of the array is starting address of the array
	// end ending point
	// starting point is included and endiong point is excluded
	//for full array we have to give the start+ens

	sort(a, a + end, compare); //we are not calling the commpare function but we are sending compare function as a parameter to sort funciton

	for (int i = 0; i < end; i++)
	{
		cout << a[i] << ",";
	}

	return 0;
}