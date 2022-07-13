#include <iostream>
using namespace std;

void horizontalWavePrint(int arr[100][100], int totalRows, int totalCols){

	for (int row = 0; row < totalRows; row++)
	{
		if(row%2 == 0){
			for (int col = 0; col < totalCols ; col++)
			{
				cout<<arr[row][col]<<", ";
			}
			
		}
		else{
			for (int col = totalCols-1; col >= 0; col--)
			{
				cout<<arr[row][col]<<", ";
			}
			
		}
		cout<<endl;
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


	horizontalWavePrint(a, l, m);

	return 0;
}




// [[1, 2, 3, 4],
// [11, 12, 13, 14],
// [21, 22, 23, 24]]

// 1 ,2 ,3, 4, 14, 13, 12, 11, 21, 22, 23, 24
// for (int row = 0; row < rows ; row++)
// 			{
// 				cout<<arr[rows][cols]<<", ";

// 			}
// for (int row = rows-1; row >= rows ; row--)
// 			{
// 				cout<<arr[rows][cols]<<", ";
// 			}