#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//for comparing the length of the string
 bool compare(string a,string b){
 	if (a.length() == b.length())
 	{
 		return a<b;//used overloaded less than operator
 	}
 	return a.length()>b.length();
 }

int main(int argc, char const *argv[])
{
	
	int n;
	cin>>n;
	cin.get();
	string s[100];// we can also create a vector of strings instead of array.


	for (int i = 0; i < n; i++)
	{
		getline(cin,s[i]);
	}


	sort(s, s+n, compare);

	for (int i = 0; i < n; i++)
	{
		cout<<s[i]<<endl;
	}
	

	return 0;
}