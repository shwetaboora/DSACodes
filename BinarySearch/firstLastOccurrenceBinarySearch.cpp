#include <iostream>
using namespace std;



int first_occurrence(int a[], int n, int key) {

	int s = 0;
	int e = n - 1;
	int ans = -1;
	//update in a direction that ans value gets lower and lower

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key)
		{
			//do two things
			ans = mid;//1
			e = mid - 1; //2  // don't stop and search in left part of the array
		}
		else if (a[mid] > key)
		{
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
}


int last_occurrence(int a[], int n, int key) {

	int s = 0;
	int e = n - 1;
	int ans = -1;
	//update in a direction that ans value gets lower and lower

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key)
		{
			//do two things
			ans = mid;//1
			s = mid + 1; //2 // don't stop explore the right part of the array
		}
		else if (a[mid] > key)
		{
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}
}


int main(int argc, char const *argv[])
{

	int arr[] = {1, 2, 5, 8, 8, 8, 8, 8, 8, 9, 11, 15, 20};
	int n = sizeof(arr) / sizeof(int);
	int key;
	cin >> key;

	// first and last occurrence of a key in a sorted array
	cout << first_occurrence(arr, n, key) << endl;
	cout << last_occurrence(arr, n, key) << endl;


	return 0;
}