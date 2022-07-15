/*piyush lost in a magical park which contains N rows and M columns in order to get out of the park safely and return home, 
he needs atleast K amount of strength. Given a N by M pattern, your task is to find whether piyush can ever escape the park.
Piyush enters the with strength S. the park is filled with some obstacles denoted by '.' some magical beans denoted by '*' 
and some bloackades denoted as'#'  if he encouters an obstacle (.) strength decreases by 2 if he encouters by (*) 
his strength increases by 5 piyush can only walk row wise so he starts from left of a row and moves towards right and 
he does this for every row. however when he encounters a blockade (#) he cannot go further in  his current row and simply jumps to 
the start of new line without losing strength. piyush requires a strength of 1 for every step. his strength should always be 
greater than K while traversing or else Piyush will get lost. Assume that piyush can shift immediately from last of one row to 
the start of next one without loss of any strength help out piyush to escape the park his escape is succesful if he is able to return 
home with atleast K strength.*/

// grid = 4*4
// K = 5
// S = 20
// '.' = S -= 2
// '*' = S += 5
// '#' = Blocked
// every step taken = S -= -1 (except at end of row)

//  . . * .   20-- 18 15 19 16
//  . # . .   16-- 14 13 blocked
//  * * . .   13-- 18 22 19 16
//  . # * *   16-- 14 13 blocked and out of the park so we will print yes

#include <iostream>
using namespace std;

void magicalpark(char a[][100],int m,int n,int k,int s){

	// piyush can get out of park

	bool successfuly_out = true;

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			char ch = a[i][j];

			// checking the strength
			if (s<k){
				successfuly_out = false;
				break;
			}

			if (ch == '*'){
				s+=5;
			}

			else if (ch == '.'){
				s -= 2;
			}

			else {
				break;
			}

			// we loose one point when we move forward
			if (j != n-1){
				s--;
			}
		}
	}

	if (successfuly_out){
		cout<<"yes"<<endl;
		cout<<s<<endl;
	}
	 
	else{
		cout<<"no"<<endl;
	}
}

int main() {
	// taking input
	int m, n, k,s ;
	cin>>m>>n>>k>>s;

	char park [100][100];

	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cin>>park[i][j];
		}
	}

	magicalpark(park, m,n,k,s);
	
	return 0;
}

