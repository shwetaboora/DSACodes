#include <iostream>
#include <cstring>
using namespace std;
	 
	 void removeDuplicate(char a[]){

	 	int leng = strlen(a);
	 	if (leng == 1 or leng ==0)
	 	{
	 		return;
	 	}
	 	int prev = 0;
	 	for (int current = 1;current <leng ; current++)
	 	{
	 		if (a[current]!=a[prev])
	 		{
	 			prev++;
	 			a[prev] = a[current];

	 		}
	 	}
	 	a[prev+1] = '\0';
	 	return;

	 }
int main(int argc, char const *argv[])
{
	char a[100];
	cin.getline(a, 100);

	removeDuplicate(a);
	cout<<a<<endl;

	return 0;
}