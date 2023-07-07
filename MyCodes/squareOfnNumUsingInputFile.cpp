#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int totalno;
	cout<<"enter total no "<<endl;
	cin>>totalno;

	int no;

	while(totalno>=0){
		cout<<"enter the no "<<endl;
		cin>>no;
		cout<<no*no<<endl;
		totalno = totalno -1;
	}

	// for executing this program --> squareOfnNumUsingInputFile < inputFile.txt
	return 0;
}