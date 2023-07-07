#include <iostream>
using namespace std;

// unique number 2
// example a = {1,1,2,3,3,2,5,7}
// unique = 3,7
// linear time, constant space

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int a[100];

	int no;
	int res = 0 ;

	for (int i = 0; i < n; i++)
	{
		cin >> no;
		a[i] = no;
		res = res ^ no;
	}
	// xor = a^b;
	int temp = res;
	int pos = 0;
	while ((temp & 1) != = 1) {
		pos++;
		temp = temp >> 1;
	}

	// the first bit in the xor is at position "pos"
	int ma  sk = (1 << pos);

	// find thode no which contain set bit at position pos
	int a = 0;
	int b = 0;

	for (int i = 0; i < n; i++)
	{
		if ((a[i]&mask) > 0)
		{
			a = a ^ a[i];
		}
	}

	y = res ^ x;

	cout << min(x, y) << " " << max(x, y) << endl;

	return 0;
}