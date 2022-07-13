// passing functions as parameters 
//
#include<iostream>
using namespace std;

bool compare (int a ,int b ){
	cout<<"comaparing "<<a<<" And "<<b<<endl;
	return a>b;
}

	 void bubble_sort(int a[], int n, bool (&cmp)(int a, int b)){

	 	// n-1 to move the large elements to the end
	 	for (int itr = 1; itr <= n-1 ; itr++)
	 	{
	 		// pairwise swapping in the unsorted part of the array
	 		for (int j = 0; j <= (n - itr -1); j++)
	 		{
	 			if (cmp (a[j],a[j + 1]))
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

	bubble_sort(a,n, compare);
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<",";
	}

	return 0;
}