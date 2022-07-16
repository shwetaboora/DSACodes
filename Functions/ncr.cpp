#include <iostream>
using namespace std;

// returnType functionName (parameters or input){

// 	return something of type returnType
// }


int factorial(int num){
	int numFactorial = 1;
	for(int i = 1; i <= num; i++){
		numFactorial = numFactorial*i;
	}
	return numFactorial;
}

int ncrres(int n, int r){
	int nFact = factorial(n);
	int rFact = factorial(r);
	int nrFact = factorial(n-r);

	int ncr = nFact/(rFact*nrFact);
	return ncr;
}
int main(int argc, char const *argv[])
{	

	int n;
	cin>>n;
	int r;
	cin>>r;
	int result = ncrres(n,r);
	cout<<result<<endl;

	return 0;
}