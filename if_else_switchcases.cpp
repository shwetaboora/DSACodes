//if, else if, else, switch, case, break
// conditional statements = if, else if, else
#include <iostream>
using namespace std;

	int main()
	{
		int age; 
		cout<<"what is your age"<<endl;
		cin>>age;
		
		//selection control structure: if else-if else ladder
		//else-if block if we want only one of the blocks is executed.
		/*  
		if (start)
		else if
		else if (multiple) 
		else(optional)
		*/
		if((age<18)&&(age>0)){
			cout<<"you are not allowed"<<endl;
		}
		else if(age==18){
			cout<<"you are a kid but u are allowed"<<endl;
		}
		else if(age<1){
			cout<<"you are not born"<<endl;
		}
		else{
			cout<<"you are allowed"<<endl;
		}

		// //selection control structure: switch case statements
		switch (age)
		{
			case 18:
				cout<<"you are 18"<<endl;
				break;
			case 22:
				cout<<"you are 22"<<endl;
				break;
			case 2:
				cout<<"you are 2"<<endl;
				break;
			default:
				cout<<"no special cases"<<endl;
		}
		cout<<"done with switch cases";

		return 0;
	}