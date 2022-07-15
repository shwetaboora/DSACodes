// given a sorted array we have to find the pair (2 numbers sum) of elements which sums to k (given)
// 1 3 5 7 10 11 12 13
// find sum 16
#include <iostream>
using namespace std;
	 
int main(){

	int n, key;

	int a[] = {1, 3,5, 7, 10, 11, 12, 13};
	int s = 16;

	int i = 0;
	int j = sizeof(a)/sizeof(int) -1 ;

	while(i < j){
		int cs = a[i] + a[j];

		if (cs>s)
		{
			j--;
		}
		else if (cs<s)
		{
			i++;
		}
		else if (cs = s)
		{
			cout<< a[i]<<" and "<< a[j]<<endl;
			i++;
			j--;
		}
	}


	return 0;
}