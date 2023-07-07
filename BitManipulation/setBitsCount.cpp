#include <iostream>
using namespace std;

// first method
int countBits(int n) {
	int ans = 0;
	while (n > 0) {
		ans += (n & 1);
		n = n >> 1;
	}
	return ans;
}

// second method
int countBitsFast(int n) {
	int ans = 0;
	while (n > 0) {
		n = n & (n - 1);
		ans++;
	}

	return ans;
}


int main(int argc, char const *argv[])
{
	//given a number n, find number of set bits in binary representation of it
	// n=13, binary = 1101, output = 3
	// first method
	int n;
	cin >> n;
	cout << countBits(n) << endl;
	cout << countBitsFast(n) << endl;
	cout << __builtin_popcount(n) << endl; // this inbuilt method directly gives the no. of set bits in binary representation

	return 0;
}