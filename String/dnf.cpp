#include <iostream>
#include <algorithm>
using namespace std;

void dnf(int arr[], int n) {
	int low = 0;
	int mid = 0;
	int high = n - 1;

	while (mid <= high) {
		// when we have zero
		if (arr[mid] == 0) {
			swap(arr[mid], arr[low]);
			low++;
			mid++;
		}
		// when we have one
		else if (arr[mid] == 1) {
			mid++;
		}

		//when we have two
		else {
			if (arr[mid] == 2) {
				swap(arr[mid], arr[high]);
				high--;
			}
		}
	}
}


int main(int argc, char const *argv[])
{

	int n = 12;
	int arr[12] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};


	dnf(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;


	return 0;
}