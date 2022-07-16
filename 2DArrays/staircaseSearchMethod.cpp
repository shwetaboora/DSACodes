#include <iostream>
using namespace std;

void Search(int a[][100],int rows, int cols ,int key){

	int row = 0;
	int col = cols - 1;

	while(row<rows && col<cols){ 
		if(key == a[row][col]){
			cout<<"position of the element "<<endl;
			cout<<row<<" "<<col;
			break;
		}
		else if (key>a[row][col]){
			row++;
		}
		else if (key<a[row][col]){
			col--;
		}
	}
}

int main(){

	int rows;
	int cols;
	cout<<"enter rows and cols "<<endl;
	cin>>rows;
	cin>>cols;

	int a[100][100];
	cout<<"enter the array elements "<<endl;
	for (int row = 0; row < rows; row++){
		for (int col = 0; col < cols; col++){	
			cin>>a[row][col];
		}
	}

	int key;
	cout<<"enter the no you want to find "<<endl;
	cin>>key;

	Search(a,rows, cols,key);

	return 0;
}

