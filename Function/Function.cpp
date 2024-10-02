#include <iostream>
using namespace std;
// function definition
void printHello()
{
    cout << "Hello\n";
}
int printNum()
{
    return 3;
}

// function parameters are the copy of the argument

int sum(int a, int b)
{
    int s = a + b;
    // return statements are final statements
    return s;
}
// functions solve the problem of redundancy
int main()
{
    // function call/ invoke
    // fixed values are called literals and so are arguments
    printHello();
    cout << printNum() << endl;
    int val = printNum();
    cout << val << endl;

    cout << sum(10, 5) << endl; // arguments are actual value passed to a function

    // function in memory

    // there are two types of memory
    //  1. stack- used for static allocation
    // every function is stored in the stack memory in the form of stack frames
    // function occupies memory in call stack
    // 2. heap- used for dynamic allocation

    // pass by value - copy of arguments passed to a function
    // pass by reference - address of arguments passed to function
    // Normal variable/primitive datatypes like int, float, double etc are pass by value generally
    // but data structures like vectors, ll , stack are pass by reference

    return 0;
}