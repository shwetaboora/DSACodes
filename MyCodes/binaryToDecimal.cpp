#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int totalno;
	cout<<"enter the total no "<<endl;
	cin>>totalno;
	int no;
	
	while(totalno>0){
		cout<<"enter the no.s: "<<endl;
		cin>>no;
		int p = 1;
		int ans = 0;
		while (no>0){
			int r = no%10;
			ans = ans+r*p;
			p = p*2;
			no = no/10;
		}
		cout<<ans<<endl;
		totalno = totalno - 1;
	}

	return 0;
}