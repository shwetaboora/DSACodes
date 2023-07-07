#include <iostream>
using namespace std;
#include <cstring>
/*
finding subsequences/ subsets of a given string
input - abc
output - " ",a,ab,abc,ac,b,bc,c
substrings are continous and susets are not like ac are subset abd ab are subsequence

*/
void filterChars(int n, char a[]) {

	int j = 0;
	while (n > 0) {
		int last_bit = (n & 1);
		if (last_bit == 1)
		{
			cout << a[j];
		}
		j++;
		n = n >> 1;
	}
	cout << endl;
}

void printSubsets(char a[]) {
	int n = strlen(a);
	for (int i = 0; i < (1 << n); i++)
	{
		filterChars(i, a);
	}
	return;
}
int main(int argc, char const *argv[])
{
	char a[100];
	cin >> a;
	printSubsets(a);








	return 0;
}