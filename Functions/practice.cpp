#include <iostream>
using namespace std;

void fun1(int a, int arr[]){
	a = 40;
	arr[2] = 20;
}

void fun2(int &a, int arr[]){
	a = 200;
	arr[1] = 300;
}

// void fun3(int &a, int** arr){
// 	a = 400;
// 	arr[1] = 900;
// }

void printData(int var, int xyz[], int n){
	cout<<var<<endl;
	for(int i=0; i<n; i++){
		cout<<xyz[i]<<", ";
	}
	cout<<"================================"<<endl;
}

int main(int argc, char const *argv[])
{
	int x = 100;
	int n=9;
	int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	printData(x, arr1, n);
	fun1(x, arr1);
	printData(x, arr1, n);
	fun2(x, arr1);
	printData(x, arr1, n);
	//fun3(x, &arr1);
	printData(x, arr1, n);
	return 0;
}
