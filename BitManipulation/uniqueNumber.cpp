#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// problem -- unique number 2N + 1
	// given a list of numbers where every numbers occurs twice except one, find
	int n;
	cin >> n;

	int no;
	int ans = 0;
	// bitwise operator to solve,
	// helped to not any storage
	//
	for (int i = 0; i < n; i++)
	{
		cin >> no;
		ans = ans ^ no;
	}
	cout << ans << endl;

	return 0;
}