#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	// string initialisation
	string s0;
	string s1("hello");
	string s2 = "Hello";
	string s3(s2);
	string s4 = s3;

	char a[]= {'a','b','c','\0'};
	string s5(a);

	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;

	if (s0.empty())		//.empty function returns a boolean value true or false.
	{
		cout<<"s0 is an empty string"<<endl;
	}

	// append adds the string at the last of the particular string
	s0.append(" hello everyone.. ");
	cout<<s0<<endl;

	s0 += " and good morning ";
	cout<<s0<<endl;

	// remove   .clear removes the elements of the array
	cout<<s0.length()<<endl;
	s0.clear();
	cout<<s0.length()<<endl;

	// .compare compares the strings. it returns an integer == 0 if equal, > 0 , < 0
	s0 = "apple";
	s1 = "mango";

	cout<<s0.compare(s1)<<endl;

	// overloaded operators - > , <
	if (s1 > s0)
	 {
	 	cout<< " mango is lexi greater than apple "<<endl;
	 } 

	cout<<s1[0]<<endl;

	// .find for finding the index of the substring
	string s = " i want to have apple juice ";
	int index = s.find("apple");
	cout<<index<<endl;

	// .erase we can also remove the word from the string
	string word = "apple";
	int length = word.length();
	cout<<s<<endl;
	s.erase(index,length+1);// +1 for getting two spaces in the output
	cout<<s<<endl;

	// iterate over all the characters in the string (simplest way is to use for loop) we can also use iterators, we can also use for each loop to iterate.
	for (int i = 0; i < s1.length();i++)
	{
		cout<<s1[i]<<":";
	}
	cout<<endl;

	// iterators
	// for (auto it = s1.begin(); it != s1.end(); it++ )
	// {
	// 	cout<<(*it)<<",";
	// }
	// cout<<endl;
	for (string::iterator it = s1.begin(); it != s1.end(); it++ )
	{
		cout<<(*it)<<",";
	}
	cout<<endl;

	// for each loop
	for (char c:s1)
	{
		cout<<c<<".";
	}

	return 0;
}