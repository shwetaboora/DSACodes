#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[] = {10,20,30,40,50};
	int n = sizeof(arr)/sizeof(int);

	rotate (arr,arr+2,arr+n);
	for (int i = 0; i < n; i++)
	{ 
		 cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	// apply the same on vector
	vector<int> v{1,2,3,4,5};
	
	//rotate(v.begin(),v.begin()+3,v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<< " ";
	}

	//next permutation
	next_permutation(v.begin(),v.end());
	next_permutation(v.begin(),v.end());
	cout<<endl;

	//for each loop
	for (int x:v)
	{
		cout<<x<<" ";
	}
	//another method dont call the rotate method 
	return 0;
}
