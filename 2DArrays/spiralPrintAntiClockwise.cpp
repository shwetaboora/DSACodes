#include <iostream>
using namespace std;

void spiralPrintAntiClockwise(int arr[100][100], int totalRows, int totalCols){

	int startRow = 0;
	int endRow = totalRows-1;
	int startCol = 0;
	int endCol = totalCols-1;

	while(startRow <= endRow and startCol <= endCol){
	
	for (int i = startRow; i <= endRow; i++)
	{
		cout<<arr[i][startCol]<<", ";
	}
	startCol++;
		
	for (int i = startCol; i <= endCol; i++){
		cout<<arr[endRow][i]<<", ";
	}
	endRow--;

	if (startCol <= endCol){
	for (int i = endRow; i >= startRow; i--)
	{
		cout<<arr[i][endCol]<<", ";
	}
	endCol--;

	if (startRow <= endRow)
	{
		for (int i = endCol; i >= startCol; i--)
	{
		cout<<arr[startRow][i]<<", ";
	}
	startRow++;
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

	spiralPrintAntiClockwise(a, l, m);

	return 0;
}