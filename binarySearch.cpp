#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[] = {10, 20, 30, 40, 40, 40, 50, 100, 1100};
	int n = sizeof(arr) / sizeof(int);
	//search in a sorted array
	int key;
	cin >> key;

	bool present = binary_search(arr, arr + n, key);
	if (present)
	{
		cout << "present" << endl;
	}
	else {
		cout << "absent" << endl;
	}

	// to get the index of the of the element
	// lower_bound(start,end,key) and upper_bound(start,end,key);

	//lower bound
	// int* it =
	auto lb = lower_bound(arr, arr + n, 41); // it will return the first element that will compare that key is >=key
	cout << "lower bound of 40 is: " << (lb - arr) << endl;

	//upper bound
	auto ub = upper_bound(arr, arr + n, 41); // it will return the first element that is strictly greater than key. >key
	cout << "upper bound of 40 is: " << (ub - arr) << endl;

	cout << "ouccrances frequency of 40 is: " << (ub - lb) << endl;

	return 0;
}