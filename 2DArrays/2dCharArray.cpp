#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	char b[][10] = {{'a','b','\0'}, {'d', 'e', 'f', '\0'}};

	char a[][10] = {"ab","def","ghi","hello"};
	char c[10][10];
	c[0][0] = 'A';
	cout<<a[2]<<endl;
	cout<<a[3]<<endl;

	return 0;
}