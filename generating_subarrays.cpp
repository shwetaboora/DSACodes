// generating subarrays from an array like array a- 1 4 6 3  so subarray = 1 4 , 146, 1463, 46, 463, 63, 3 
#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[100];

	for(int i = 0; i<n; i++){
		cin>>a[i];
	}

	for(int i = 0; i<n; i++){

		for (int j = i; j<n ; j++)
		{

			// elements of subarray which starts from i and ends at j
			for (int k = i; k <= j; k++)
			{
				cout<<a[k]<<",";
			}

			cout<<endl;
		}
	}

	return 0;
}