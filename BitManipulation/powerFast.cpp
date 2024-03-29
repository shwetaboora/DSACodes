#include <iostream>
using namespace std;

// exponentiation / power using bitmasking
int power_optimised(int a, int n) {
	int ans = 1;

	while (n > 0) {
		int last_bit = (n & 1);

		if (last_bit) {
			ans = ans * a;
		}
		a = a * a;
		n = n >> 1;
	}

	return ans;
	return 0;
}


int main(int argc, char const *argv[])
{
	int a, n;
	cin >> a >> n;
	cout << power_optimised(a, n) << endl;
	return 0;
}