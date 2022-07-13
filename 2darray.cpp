#include <iostream>
using namespace std;

int main(){
	int a[100][100] = {0};

	int l,m;
	cin>>l>>m;

	int v = 1;
	for (int row = 0; row <= l-1; row++){
		for (int col = 0; col <=m-1 ;col++){
			a[row][col] = v;
			v = v+1;
			cout<<a[row][col]<<", ";

		}
		// cout<<endl;
	}

	return 0;
}