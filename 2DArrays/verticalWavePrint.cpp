#include <iostream>
using namespace std;

void verticalWavePrint(int arr[100][100], int totalRows, int totalCols){

	for (int col = 0; col < totalCols; col++)
	{
		if (col%2 == 0)
		{
			for (int row = 0; row < totalRows ; row++)
			{
				cout<<arr[row][col]<<", ";
			}
		}
		else{
			for (int row = totalRows-1 ; row >= 0; row--)
			{
				cout<<arr[row][col]<<", ";
			}
		}
	}

}


int main(int argc, char const *argv[])
{
	int l,m;
	cin>>l>>m;
	int a[100][100] = {0};
	int v = 1;
	for (int row = 0; row <= l-1; row++){
		for (int col = 0; col <=m-1 ;col++){
			a[row][col] = v;
			v = v+1;
			cout<<a[row][col]<<" ";

		}
		cout<<endl;
	}


	verticalWavePrint(a, l, m);

	return 0;
}




// [[1, 2, 3, 4],
// [11, 12, 13, 14],
// [21, 22, 23, 24]]

//1, 11, 21, 22, 12, 2, 3, 13, 23, 24, 14, 4
