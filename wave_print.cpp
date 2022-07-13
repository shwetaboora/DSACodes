//we have to print an 2d array in wave way like firstly first print the row in top to down then next row in down to up direction
#include <iostream>
using namespace std;

int main(){

	int a[100][100] = {0};

	int m,n;
	cin>>m>>n;
	// iterate(going to each element of the array) over the array
	int val = 1;
	for (int row = 0; row <= m-1; row++)
	{
		for (int col = 0; col <=n-1 ;col++)
		{
			a[row][col] = val;
			val = val+1;
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}

	// wave print
	for (int col = 0;col  < n; col++)
	{
		if (col%2==0)
		{
			// even col we go top to down direction
			for (int row = 0; row < m; row++)
			{
				cout<<a[row][col]<<" ";
			}

		}

		else{

			// bottom to up direction
			for (int row = m-1; row >= 0; row--)
			{
				cout<<a[row][col]<<" ";
			}
		}
	}




	return 0;
}