#include <iostream>
using namespace std;
// 1.1 function overloading - different functions with the same name but different no of arguments or different type of arguments
// class A
// {
// public:
//     void func()
//     {
//         cout << "function with no argument" << endl;
//     }
//     void func(int x)
//     {
//         cout << "function with int argument" << endl;
//     }
//     void func(double x)
//     {
//         cout << "function with double argument" << endl;
//     }
// };

// 1.2 operator overloading
// class Complex
// {
// private:
//     int real, imag;

// public:
//     // constructor
//     Complex(int r = 0, int i = 0)
//     {
//         real = r;
//         imag = i;
//     }

//     Complex operator+(Complex const &obj)
//     {
//         Complex res;
//         res.imag = imag + obj.imag;
//         res.real = real + obj.real;
//         return res;
//     }
//     void display()
//     {
//         cout << real << " +i" << imag << endl;
//     }
// };

// 2. run time
class base
{
public:
    virtual void print()
    {
        cout << "this is the base class's print function" << endl;
    }
    void display()
    {
        cout << "this is the base class's display function" << endl;
    }
};

class derived : public base
{
public:
    void print()
    {
        cout << "this is the derived class's print function" << endl;
    }
    void display()
    {
        cout << "this is the derived class's display function" << endl;
    }
};

int main()
{
    // poly - many
    // morphism - Forms
    // for eg - a person can be good in singing as well as swimming as well as dancing so there can be many forms in which he can be

    // types of Polymorphism
    // 1. compile time
    // 1.1 function overloading - different functions with the same name but different no of arguments or different type of arguments
    // A obj;
    // obj.func();
    // obj.func(23);
    // obj.func(2.32);

    // 1.2 operator overloading
    // Complex c1(12, 7), c2(6, 7);
    // Complex c3 = c1 + c2;
    // c3.display();

    // 2. run time
    // 2.1 virtual Functions - when we have a function in base class and as well as in the derived class with same name so we put virtual keyword on one we dont want to use
    // it gets binded at dynamically when we gave address at runtime after that it got binded
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr->print();
    baseptr->display();

    return 0;
}