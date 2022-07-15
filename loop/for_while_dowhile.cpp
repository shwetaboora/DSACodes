// loop for, while, do while, 
#include<iostream>
using namespace std;

   int main()
   {
   	// loops in C++
   	// 3 types of loops
   	// 1.for loop
   	// 2.while loop
   	// 3.do-while loop

   	//for loop

   	// syntax of for loop
   	// for(initialization; condition; updation)
   	// {
   	//    loop body(c++ code);
    // }

    for (int i = 1; i <= 20; i++)
    {
    	cout<<i<<endl;
    }

	int cliff_end = 10;
	int x;

	for(x=0; x<cliff_end; x= x+1)
	{
		cout<<"taking 1 step reaching: "<<x<<endl;
	}

 //    // //infinite for loop
    // for (int i = 1; 19 <= 20; i++)
    // {
    // 	cout<<i<<endl;
    // }

    // // while loop

    // // syntax of while loop
    // // initialization
    // // while(condition)stopping criteria
    // // {
    // // c++statements;update condition
	// // }

    int f = 1;// initialisation
	while(f<=20)//stopping criteria
	{
		cout<<f<<endl;
		f++;      //update condition
	}

	int cliff_end = 10;
	int x=0;

	while (x<cliff_end)
	{
		x = x+1;
		cout<<"taking 1 step reaching: "<<x<<endl;
	}
 
	cout<<"final x : "<<x<<endl;

	if (x==cliff_end)
	{
		cout<<"standing at the edge "<<endl;
	}

	else if (x>cliff_end)
	{
		cout<<"falling from the cliff "<<endl;
	}


	// // infinite while loop
	// while(true)
	// {
	// 	cout<<f<<endl;
	// 	f++;
	// }

	// // do while loop
	// // syntax 
	// // do{	
	// // c++ statements;
	// // }while(condition);

	// do{
	// 	cout<<f<<endl;
	// 	f++;
	// }while(f<=32);

	int cliff_end = 10;
	int x=0;

	do{
		x = x+1;
		cout<<"taking 1 step reaching: "<<x<<endl;
	}while(x<cliff_end);

	cout<<"final x : "<<x<<endl;

	if (x==cliff_end)
	{
		cout<<"standing at the edge "<<endl; 
	}

	else if (x>cliff_end)
	{
		cout<<"falling from the cliff "<<endl;
	}

   	return 0;
   }