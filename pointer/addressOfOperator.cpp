#include <iostream>
using namespace std;
// pointer is a variable that stores the address of the another variable

int main(int argc, char const *argv[])
{
	int x = 5;
	int y1 = 10.5;
	cout<<&x<<endl;

	float y = 10.5;
	cout<<&y<<endl;
	// it doesn't work for character variables
	char ch = 'A';
	// explicit typecasting from char* to void*
	cout<<(void *)&ch<<endl;

	//pointers

	int *xptr;
	// stores the address of the variable
	xptr = &x;

	cout<<&x<<endl;
	cout<<xptr<<endl;

	// reassign another address to the variable
	xptr = &y1;
	cout<<&y1<<endl;
	cout<<xptr<<endl;

	// by dereferencing a pointer we can access the variable.
	// & bucket gives address
	// * address gives bucket

	int q = 10;
	int *qptr;
	qptr = &q;

	cout<<*(&q)<<endl;
	cout<<*(qptr)<<endl;

	cout<<*(&qptr)<<endl;
	cout<<&(*qptr)<<endl;

	cout<<&qptr<<endl;
	// double pointer
	int **qqptr = &qptr;
	cout<<qqptr<<endl;

	
	return 0;
}