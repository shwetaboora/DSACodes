#include <iostream>
#include <cstring>
using namespace std;

char *mystrtok(char*str, char delim){
	// string and the single character that acts as a delimiter
	static char*input = NULL;
	if (str!=NULL){
		// making the first call
		input = str;
	}
	// checking here base case after the final token has been removed
	if (input == NULL){
		return NULL;
	}

	// start extracting tokens and store them in an array
	char *output = new char [strlen(input)+1];
	int i = 0;
	for ( ; input[i] !='\0';i++){
		if (input[i]!=delim){
			output[i] = input[i];
		}
		else{
			output[i] = '\0';
			input = input + i + 1;
			return output;
		}
	}

	// corner case
	output[i] = '\0';
	input = NULL;
	return output;
}

int main(int argc, char const *argv[])
{ 
	char s[100]= "today is a rainy day ";

	char *ptr = mystrtok(s,' ');
	cout<<ptr<<endl;  

	while (ptr!= NULL){
		ptr = mystrtok(NULL,' ');
		cout<<ptr<<endl;
	}
	return 0;
}