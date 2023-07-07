#include <iostream>
using namespace std;

int decimalToBinary(int n) {
	int ans = 0;
	int p = 1;

	while (n > 0) {
		int LastBit = (n & 1);
		ans += p * LastBit;

		p = p * 10;
		n = n >> 1;
	}
}

int main(int argc, char const *argv[])
{
	// given a number n, find number of set bits in binary rep. of it.
	int n;
	cin >> n;

	cout << decimalToBinary(n);
	cout << endl;

	return 0;
}