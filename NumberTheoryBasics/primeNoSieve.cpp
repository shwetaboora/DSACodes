#include <iostream>

using namespace std;


//Naive approach O(sqrtN)
bool isPrime(int n) {
	if (n == 1) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	for (int i = 2; i * i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
		return true;
	}
}

//sieve approach --> generate an array containing prime number
void primeSieve(int *p) {

	// first mark all odd numbers prime
	for (int i = 3; i <= 100 ; i++ )
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
			for (int  j = i * i; j <= 100 ; j =  j + i)
			{
				p[j] = 0;
			}
		}
	}

	// special cases
	p[2] = 1;
	p[1] = p[0] = 0;

}

int main()
{
	int n;
	cin >> n;
	int p[105] = {0};

	primeSieve(p);

	// lets  print primes upto range n
	for (int i = 0; i <= n; i++)
	{
		if (p[i] == 1)
		{
			cout << i << " ";
		}
	}

	return 0;
}