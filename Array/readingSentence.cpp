#include <iostream>
using namespace std;

// read a sentence and store it
// cin.get() reads a single character 
// put a loop to read characters till you get a new line '/n'

void readSentence(char a[], int maxlen, char deliminator = '\n'){
	int i = 0;
	char ch = cin.get();
	while(ch!= deliminator){
		a[i] = ch;
		i++;
		if (i == (maxlen -1))
		{
			break;
		}
		ch  = cin.get();
	}
	a[i]= '\0';
	return;
}

int main(int argc, char const *argv[])
{
	char a[100];
	// readSentence(a, 100, '$');
	cin.getline(a, 100, '$');
	cout<<a<<endl; 
	return 0;
}