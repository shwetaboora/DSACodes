#include <iostream>
using namespace std;

int f(int n) {
	//base case
	if (n == 0 or n == 1)
	{
		return n;
	}

	//rec case
	int f1 = f(n - 1);
	int f2 = f(n - 2);

	return f1 + f2;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cout << f(n) << endl;
	return 0;
}