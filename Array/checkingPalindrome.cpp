#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char a[]){
		int i =0;
		int j = strlen(a)- 1;

		while(i<j){
			if (a[i]==a[j])
			{
				i++;
				j--;
			}
			else{
				return false;
			}
		}
		return true;
	}

int main(){
	
	char a[100];
	cin.getline(a, 100);

	if (palindrome(a)){
		cout<<" palindrome "<<endl;
	}
	else{
		cout<<"not palindrome"<<endl;
	}

	return 0;
}