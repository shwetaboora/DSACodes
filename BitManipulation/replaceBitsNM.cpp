#include <iostream>
using namespace std;

// replace bits in N by M
/*
given two  32 - bits numbers, n and m, and two bit positions, i and j.
write a method to set all the bits between i and j in n equal to m
(eg - m becomes a substring of n located to i and starting at j).

example:
input: n = 1000000000
m = 10101, i = 2, j = 6
output:n = 1001010100
*/

int clearRangeItoJ(int n, int i, int j) {
	int ones = (~0);
	int a = ones << (j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;
	int ans = n & mask;
	return ans;

}

int replacebits(int n, int m, int i, int j) {
	int n_ = clearRangeItoJ(n, i, j);
	int ans = n_ | (m << i);
	return ans;
}

int main(int argc, char const *argv[])
{
	int n = 15;
	int i = 1, j = 3;
	int m = 2;
	cout << replacebits(n, m, i, j) << endl;


	return 0;
}