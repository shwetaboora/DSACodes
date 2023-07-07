#include <iostream>
using namespace std;

int main(){

 	int i,n;
 	float arr[100];

 	cout << "Enter total number of elements: ";
 	cin >> n;
  	cout << endl;

 	for(i = 0; i < n; ++i) {
    	cout << "Enter Number " << i + 1 << " : ";
    	cin >> arr[i];
  	}

  	// Loop to store max number to arr[0]
 	for(i = 1;i < n; ++i) {

    	// we will change < to > to find the smallest element
   		if(arr[0] < arr[i])
    		arr[0] = arr[i];
  	}

  	cout <<endl<<"Max element = "<<arr[0];

	return 0;
}