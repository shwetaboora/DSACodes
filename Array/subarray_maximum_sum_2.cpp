// another method of finding the maximum sum array
// n^2 loop
#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[100];
	int cumsum[100] = {0};

	int maxsum = 0;
	int currentsum = 0;

	// for printing that it is sum of which subarray.
	int left = -1;
	int right = -1;

	cin>>a[0];
	cumsum[0] = a[0];

	for(int i = 1; i<n; i++){
		cin>>a[i];
		cumsum[i] = cumsum[i-1]+ a[i];
	}

	for(int i = 0; i<n; i++){

		for (int j = i; j<n ; j++)
		{

			// elements of subarray which starts from i and ends at j
			currentsum = 0;
			
			currentsum = cumsum[j] - cumsum[i-1];
			// update the maximum sum if current sum id > maximum sum
			if (currentsum > maxsum)
			{
				maxsum = currentsum;

				left = i;
				right = j;
			}
			cout<<currentsum<<endl;
		}
	}
  
	// print the maximum sum
	cout<<"maximum sum is "<<maxsum<<endl;

	// printing the subarray
	for (int k = left; k <= right;k++)
	{
		cout<< a[k]<<","; 
	} 


	return 0;
}