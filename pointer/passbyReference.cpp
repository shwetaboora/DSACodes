#include <iostream>
using namespace std;

// pass by reference using pointers
void increment(int *aptr){
	*aptr = *aptr +1;
	cout<<"inside function"<<*aptr<<endl;


}
int main(int argc, char const *argv[])
{
	int a = 10;
	increment(&a);
	cout<<"inside main function"<<a<<endl;

	return 0;
}