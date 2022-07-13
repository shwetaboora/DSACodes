// arranging a randomly shuffled array in increasing/decreasing order.

#include<iostream>
using namespace std;

void selection_sort(int a[], int n){
	int i;
	int min_index;
	for( i=0; i<n-1; i++){
		min_index = i;

	// finding out the smallest element index in the unsorted part
		for(int j=i; j<=n-1; j++){
			if(a[j]<a[min_index]){
				min_index = j;
			}
		}
	}
	// after this loop we can do swap finally
	swap(a[i], a[min_index]);
}

int main(){
	int n, keys;
	cin>>n;
	int a[1000];

	for(int i = 0; i<n; i++){
	cin>>a[i];
	}
	selection_sort(a,n);
	for(int i=0; i<n; i++){
	cout<<a[i]<<",";
	}
	return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin>>arr[i];
// 	}
// 	for (int i = 0; i < n-1; i++)
// 	{
// 		for (int j = i+1; j < n ; j++)
// 		{
// 			if (arr[j]<arr[i]){
// 				int temp = arr[j];
// 				arr[j] = arr[i];
// 				arr[i]= temp;
// 			}
// 		}
// 	}
// 	for (int i = 0; i < n; i++)
// 	{
// 		cout<<arr[i]<<" ";
// 	}
// 	cout<<endl;
// }
