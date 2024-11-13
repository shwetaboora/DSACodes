#include <iostream>
using namespace std;
// it is possible to inherit attributes and methods from one class to another
// two types of classes
// 1. derived class(Child) - the class that inherits from another class
// 2. base class (parent)- the class being inherited from

// types of inheritance
// 1. single inheritance - inheriting from one single class
// class A
// {
// public:
//     void func()
//     {
//         cout << "inherited";
//     }
// };

// class B : public A
// {
// };

// 2. multiple inheritance - inheriting from 2 different classes
// class A
// {
// public:
//     void Afunc()
//     {
//         cout << "A inherited ";
//     }
// };
// class B
// {
// public:
//     void Bfunc()
//     {
//         cout << "B inherited";
//     }
// };

// class C : public A, public B
// {
// public:
// };

// 3. multi level inheritance - inheriting one class from other and we can access the first class elements also by using second class as it inherited first and we can us them in last class
// class A
// {
// public:
//     void Afunc()
//     {
//         cout << "A inherited ";
//     }
// };
// class B : public A
// {
// public:
//     void Bfunc()
//     {
//         cout << "B inherited";
//     }
// };

// class C : public B
// {
// public:
// };

// 4. hybrid inheritance - mixture of types of inheritances like multiple and multilevel
// class A
// {
// public:
//     void Afunc()
//     {
//         cout << "A inherited ";
//     }
// };
// class B : public A
// {
// public:
//     void Bfunc()
//     {
//         cout << "B inherited ";
//     }
// };

// class C
// {
// public:
//     void Cfunc()
//     {
//         cout << "C Inherited ";
//     }
// };
// class D : public B, public C
// {
// public:
// };

// 5. hierarchical inheritance
class A
{
public:
    void Afunc()
    {
        cout << "A inherited " << endl;
    }
};
class B : public A
{
public:
    void Bfunc()
    {
        cout << "B inherited " << endl;
    }
};

class C : public A
{
public:
    void Cfunc()
    {
        cout << "C Inherited " << endl;
    }
};
class D : public B
{
public:
};
class E : public B
{
public:
};
class F : public C
{
public:
};
class G : public C
{
public:
};
int main()
{
    // we can only inherit public and protected

    // B b;
    // cout << "1. single inheritance" << endl;
    // b.func();

    // C c;
    // cout << "2. multiple inheritance" << endl;
    // c.Afunc();
    // c.Bfunc();

    // C c;
    // cout << "3. multi level inheritance" << endl;
    // c.Afunc();
    // c.Bfunc();

    cout << "5. Hierarchical inheritance " << endl;
    B b;
    b.Afunc();
    D d;
    d.Afunc();
    d.Bfunc();
    E e;
    e.Afunc();
    e.Bfunc();
    C c;
    c.Afunc();
    F f;
    f.Afunc();
    f.Cfunc();
    G g;
    g.Afunc();
    g.Cfunc();
    return 0;
}