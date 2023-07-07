#include <iostream>
#include<climits>
using namespace std;

bool ispossible(int arr[], int n, int m, int curr_min) {
	int studentUsed - 1;
	int pages_reading = 0;

	for (int i = 0; i < n; i++)
	{
		///not required
		if (pages_reading + arr[i] > curr_min)
		{
			studentUsed++;
			pages_reading = arr[i];
			if (studentUsed > m)
			{
				return false;
			}
		}
		else {
			pages_reading += arr[i];
		}
	}
	return true;
}

int findPage(int arr[], int n, int m) {
	long long sum = 0;
	//if n<m
	if (n < m)
	{
		return -1;
	}

	// count the no of pages
	for (int i = 0; i < n ; i++)
	{
		sum += arr[i];
	}

	int s = arr[n - 1];
	int e = sum;

	while (s <= e ) {
		int mid = (s + e) / 2;

		if (ispossible(arr, n, m, mid))
		{
			ans = min(ans, mid);
			e = mid - 1;
		}
		else {
			//it is not possible to divide at x pages
			// increases the no of pages
			s = mid + 1;
		}
	}
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n, m;
		cin >> n >> m;
		int arr [100];

		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
		}
		cout << findPage(arr, n, m) << endl;
	}
	return 0;
}