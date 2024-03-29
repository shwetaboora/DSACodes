#include <iostream>
using namespace std;

int binarysearch(int a[],int n,int key){
	int s = 0;
	int e = n-1;
	

	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid] == key){
			return mid;
		}
		else if(a[mid] > key){
			e = mid-1;
		}
		else{
			s = mid+1;
		}
	}
	return -1;
}

int main(){
	int n,key;
	cin>>n;

	int a[100];
	for(int i = 0; i<n; i++){
		cin>>a[i];
	}
	cout<<"enter the element to search "<<endl;
	cin>>key;
	int result = binarysearch(a,n,key);
	cout<<result<<endl;

	return 0;
}