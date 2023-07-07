#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	char a[100];
	char largest[100];

	int len = 0;
	int largestLen = 0;

	cin.get();

	for (int i = 0; i < n; i++)
	{
		cin.getline(a, 100);
		// cout<<a<<endl;
		len = strlen(a);
		if (len>largestLen)
		{
			largestLen = len;
			strcpy(largest, a);
		}
	}

	cout<<largest<<" and "<<largestLen<<endl;


	return 0;
}