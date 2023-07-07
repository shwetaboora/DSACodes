#include <iostream>
using namespace std;

int sumofSubmatrix(int **arr, int n, int m){
	int sum=0;
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int tl = (i+1)*(j+1);
			int br = (n-i)*(m-j);
			sum+=  (tl*br)*arr[i][j];
		}
	}
	return sum;
}

int main(int argc, char const *argv[]){
	int n,m;
	cin>>n>>m;

	int **arr = new int*[n];

	for (int i = 0; i < n; i++)
	{
		arr[i]= new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>arr[i][j];
		}
	}

	cout<<sumofSubmatrix(arr,n,m)<<endl;












	// for (int topleftrow = 0; topleftrow <= n-1 ; topleftrow++){
	// 	for (int topleftcol = 0; topleftcol <= n-1; topleftcol++){
	// 		cout<<topleftrow<<","<<topleftcol<<endl;

	// 		for (int bottomrightrow = topleftrow + 1; bottomrightrow <= n-1; bottomrightrow++){
	// 			for (int bottomrightcol = topleftcol + 1; bottomrightcol <= n-1; bottomrightcol++){
	// 				cout<<bottomrightrow<<","<<bottomrightcol<<endl;

	// 				for (int i = topleftrow; i <= bottomrightrow ; i++)
	// 				{
	// 					for (int j = topleftcol; j <= bottomrightcol ; j++)
	// 					{
	// 						int sum = 0;
	// 						int arr[n];
	// 						sum += arr[i][j];
	// 						cout<<sum<<endl;
	// 					}
	// 				}
	// 			}
	// 		}
	// 	}
	// }

	return 0;
}