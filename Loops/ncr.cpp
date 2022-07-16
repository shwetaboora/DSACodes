#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n = 4;
	int r = 2;


	int resultN = 1;
	for(int i = 1; i <= n; i++){
		resultN = resultN*i;
	}

	int resultR = 1;
	for (int i = 1; i <= r ; i++)
	{
		resultR = resultR*i;
	}

	int resultNR = 1;
	int nr = n - r ;
	for (int i = 1; i <= nr ; i++)
	{
		resultNR = resultNR*i;
	}

	int ncr = resultN / (resultR * resultNR);
	cout<<ncr<<endl;
	return 0;
}