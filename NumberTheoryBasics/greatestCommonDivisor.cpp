#include <iostream>
using namespace std;

int gcd (int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}

int main(int argc, char const *argv[])
{
	int n1, n2;
	cin >> n1 >> n2;

	cout << gcd(n1, n2) << endl;
	return 0;
}

//gcd(a,b)
//gcd(a', b') = gcd(b, a%b)   - b'=a%b
//gcd(b,a%b)
//gcd(b,a%b) = 0

// lcm least common mutiple

//gcd*lcm = a * b

//lcm = 12(a) * 20(b) / 4(gcd) = 60