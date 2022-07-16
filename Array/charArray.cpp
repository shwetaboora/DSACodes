#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{


	char alpha[] = {'a','b','c','\0'};
	cout<<alpha<<endl;// in char array this gives the elements of the array
					  // special case 
					  // in char array after the elements we should put the null {'/0'}

	int no[] = {1,2,3};
	cout<<no<<endl; // in integer array this gives the address of the array
					// default case

	// taking input in array
	char arr[10];
	cin>>arr;
	cout<<arr<<sizeof(arr)<<endl;

	char charr[] = {'g','h','g'}; // in this we have to give the  null character for not showing the garbage value
	char charr1[] = "ghg"; // this contains a null character automatically
							// that's why it takes one byte more.
	cout<<charr<<" "<<sizeof(charr)<<endl;
	cout<<charr1<<" "<<sizeof(charr1)<<endl;

	char arr1[10] = "hello";
	cout<<arr1<<" "<<sizeof(arr1)<<endl;
	char arr2[10];
	cin>>arr2;
	cout<<arr2<<" "<<sizeof(arr2)<<endl;

	return 0;
}