#include <iostream>
using namespace std;

void fun1(int a, int arr[]){
	a = 40;
	arr[2] = 20;
}



int main(int argc, char const *argv[])
{
	int x = 100;

	int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	cout<<x<<endl;//100
	cout<<arr1[0] <<", "<< arr1[1] << ", "<<arr1[2] <<", "<< arr1[3] <<endl;//1, 2, 3, 4

	fun1(x, arr1);

	cout<<x<<endl;//40
	cout<<arr1[0] <<", "<< arr1[1] << ", "<<arr1[2] <<", "<< arr1[3] <<endl;//1, 2, 20, 4

	return 0;
}