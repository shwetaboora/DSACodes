#include<iostream>
#include<algorithm>
using namespace std;
// for increasing order
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for (int i = 0; i < n; i++){
// 		cin>>a[i];
// 	}

// 	sort(a, a+n);
// 	for (int i = 0; i < n;i++)
// 	{
// 		cout<<a[i]<<" ";
// 	}cout<<endl;
	
// }

// for decreasing order
// we have to define a comparator function
bool compare (int a ,int b ){
	cout<<"comaparing "<<a<<" And "<<b<<endl;
	return a>b;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; i++){
		cin>>a[i];
	}

	sort(a, a+n, compare);
	for (int i = 0; i < n;i++)
	{
		cout<<a[i]<<" ";
	}cout<<endl;
	
}