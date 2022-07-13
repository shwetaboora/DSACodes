// sorting the unsorted array
//sorting the array in a sequence smaller to largest.

#include<iostream>
using namespace std;

	 void bubble_sort(int a[], int n){

	 	// n-1 to move the large elements to the end
	 	for (int itr = 1; itr <= n-1 ; itr++)
	 	{
	 		// pairwise swapping in the unsorted part of the array
	 		for (int j = 0; j <= (n - itr -1); j++)
	 		{
	 			if (a[j] >a[j + 1])
	 			{
	 				swap(a[j], a[j+1]);
	 			}
	 		}
	 	}
	 }

	 
int main(){

	int n, key;
	cin>>n;

	int a[100];

	for(int i = 0;i < n;i++){
		cin>>a[i];
	}

	bubble_sort(a,n);
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<",";
	}

	// int n;
	// cin>>n;

	// int arr[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	cin>>arr[i];
	// }
	// int counter =1 ;
	// while (counter<n){
	// 	for (int i = 0; i < n-counter; i++)
	// 	{
	// 		if (arr[i]>arr[i+1])
	// 		{
	// 			int temp = arr[i];
	// 			arr[i] = arr[i+1];
	// 			arr[i+1]= temp;
	// 		}
	// 	}
	// 	counter++;
	// }

	// for (int i = 0; i < n; i++)
	// {
	// 	cout<<arr[i]<<" ";
	// }cout<<endl;

	return 0;
}