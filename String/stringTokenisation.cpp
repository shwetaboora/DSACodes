#include <iostream>
#include <cstring>
using namespace std;

// char *strtok(char *s, char *delimiter)
// returns a token on each subsequesnt call
// on the first call function should be passed with string argument for's'.
// on subsequent calls we should pass the string argument as null
 
int main(int argc, char const *argv[])
{ 
	char s[100]= "today is a rainy day ";

	char *pt = strtok(s," ");// delimiter in this case is a space but it can be comma space dot etc.
	cout<<pt<<endl;  // pt points to the first token of the given string

	while (pt!= NULL){
		pt = strtok(NULL," ");
		cout<<pt<<endl;
	}
	return 0;
}