#include <iostream>
using namespace std;

void primeSieve(int *p) {

	// first mark all odd numbers prime
	for (int i = 3; i <= 100; i += 2)
	{
		p[i] = 1;
	}

	// sieve
	for (int i = 3; i <= 100; i += 2)
	{
		// if the current number is not marked (it is prime)
		if (p[i] == 1)
		{
			//mark all the multiples of i as not prime
			for (int j = i * i; j <= 100 ; j =  j + i)
			{
				p[j] = 0;
			}
		}
	}

	// special cases
	p[2] = 1;
	p[1] = p[0] = 0;

}

int main(int argc, char const *argv[])
{
	int p[105] = {0};
	primeSieve(p);

	int csum[105] = {0};

	// pre compute the primes upto an index i

	for (int i = 1; i <= 100; i++)
	{
		csum[i] = csum[i - 1] + p[i];
	}

	int q;
	cin >> q;
	while (q--) {
		int a, b;
		cin >> a >> b;
		cout << csum[b] - csum[a - 1] << endl;

	}

	return 0;
}