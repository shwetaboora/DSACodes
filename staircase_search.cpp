// we have to search for a given element in a row and column wise sorted array

#include <iostream>
using namespace std;

void stair(int a[][100],int n, int key){
	int i = 0;
	int j = n-1;
	while(i<n && j>=0){
		if (key == a[i][j])
		{
			cout<<i<<" "<<j;
			break;
		}
		else if (key>a[i][j])
		{
			i++;
		}
		else if (key<a[i][j])
		{
			j--;
		}
	}
}


int main()
{
	int n;
	cin>>n;

	int a[100][100];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>a[i][j];
		}
	}

	int key;
	cin>>key;
	stair(a, n, key);

	return 0;
}