#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int n;
	cout<<"enter the value of n "<<endl;
	cin>>n;
	int row = 1;
	
	while(row <=n){
		int col = 1 ;
		if(row%2!=0){//odd row
			while(col<=row){
				cout<<1;
				col = col+1;
			}
		}
		else{//even row
			cout<<1;
			while(col<=row-2){
				cout<<0;
				col = col+1;
			}
			cout<<1;
		}
		cout<<endl;
		row = row+1;
	}

	return 0;
}