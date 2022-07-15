//spiral printing of 2d array

#include <iostream>
using namespace std;

void spiral_print(int a[100][100], int m, int n){

	int sr = 0;
	int er = m-1;
	int sc = 0;
	int ec = n-1;

	while(sr <= er and sc <= ec){
		//for first row 
		for (int i = sc; i <= ec ; i++)
		{
			cout<<a[sr][i]<<" ";
		}
		sr++;
		for (int i = sr; i <= er ; i++)
		{
			cout<<a[i][ec]<<" ";
		}
		ec--;

		// for bottom row 

		if (er > sr)
		{
		for (int i = ec; i >=sc ; i--)
		{
			cout<<a[er][i]<<" ";
		}
		er--;
		}
		// for start column

		if (ec>sc)
		{
		for (int i = er; i >=sr;i--)
		{
			cout<<a[i][sc]<<" ";
		}
		sc++;
		}
	}

}


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

	spiral_print(a, m , n);

	return 0;
}