#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

	//Pair
	pair<int,char>p;
	p.first = 10;
	p.second = 'B';

	//Another way
	pair<int,char>p2(p);

	cout<<p2.first<<endl;
	cout<<p2.second<<endl;

	pair<int,string> p3 = make_pair(100,"Audi");
	cout<<p3.first<<" "<<p3.second<<endl;

	//take input
	int a,b;
	cin>>a>>b;

	pair<int,int> p4 = make_pair(a,b);
	// array of pair
	// vector of pair

	pair<pair<int,int>, string>car;
	car.second = "audi";
	car.first.first = 10;
	car.first.second = 20;

	cout<<car.first.first<<endl;
	cout<<car.second<<endl;


	return 0;
}