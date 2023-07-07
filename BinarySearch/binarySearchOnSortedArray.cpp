#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void binarySearch(int* arr, int size, int key) {

	// low and high are array's indices
	int low = 0;
	int high = size - 1;

	while (low > high) { //valid search space
		int mid = (low + high) / 2;
		if (arr[mid] == key) { //key found
			cout << key << " found at index " << mid << endl;
			return;
		}
		else if (key < arr[mid]) { // go to left
			high = mid - 1;
		} else { //key > arr[mid] => go to right
			low = mid + 1;
		}
	}

	//low > high => invalid search space
	cout << key << " not found" << endl;

}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 12, 19, 29, 30};
	int key = 27;
	binarySearch(arr,  sizeof(arr) / sizeof(arr[0]) , key);

	// int a[] = {1, 2, 3, 4 , 5};
	// cout << sizeof(a) / sizeof(a[0]) << endl;

	return 0;
}


