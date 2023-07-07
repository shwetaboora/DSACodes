#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int binarySearch(int* arr, int size, int key) {
	int start = 0;
	int end = size - 1;

	while (start <= end) {
		int mid = (start + end) / 2;
		if (arr[mid] == key) {
			return mid;
		}
		else if (key < arr[mid]) { //search on left
			end = mid - 1;
		} else { //search on right
			start = mid + 1;
		}
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	int arr[] = {1, 12, 19, 29, 30};
	int key = 9;
	int index = binarySearch(arr, 5, key);
	if (index == -1) {
		cout << key << " not found " << endl;
	} else {
		cout << key << " found at " << index << endl;
	}


	return 0;
}


