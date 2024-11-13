#include <iostream>
using namespace std;
// class - blueprint / user defined datatype it wil have some attributes(data members), functions
class student
{
    string name; // data members -  private by default
public:
    // string name;
    int age;     // data members
    bool gender; // data members

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << name << endl;
    }

    // constructor - it gets called automatically
    student()
    {
        cout << "default constructor" << endl;
    } // default constructor
    student(string s, int a, int g)
    {
        cout << "Parameterised constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // parameterised constructor

    student(student &a)
    {
        cout << "copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    // making copy constructor does deep copy(copies pointers and also the location)

    // default copy constructor does shallow copy(copies pointers but not the location)

    void printInfo()
    {
        cout << "Name- " << name << endl;
        cout << "Age- " << age << endl;
        cout << "Gender- " << gender << endl;
    }

    // destructors - gets called automatically when an object gets destroyed
    ~student() // gets called 3 times because at the end while returning 0 all objects were getting destroyed
    {
        cout << "Destructor called" << endl;
    }

    bool operator==(student &a) // operator overloading
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // student a; // object of student class      // instance
    // a.name = 'shweta'; // inaccessible coz by default they are private data members
    // a.age = 23;        // accessing datamembers of student class throught a object and using .operator
    // a.gender = 1;
    // or we can make an array of students
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     // arr[i].name = 'shwet';

    //     cout << "enter name- ";
    //     // cin >> arr[i].name;//for public data members
    //     string s;          // for private data members
    //     cin >> s;          // for private data members
    //     arr[i].setName(s); // for private data members
    //     cout << endl;
    //     cout << "enter age- ";
    //     cin >> arr[i].age;
    //     cout << endl;
    //     cout << "enter gender- ";
    //     cin >> arr[i].gender;
    //     cout << endl;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }

    // student c('gfb');
    // c.getName();

    student a("shweta", 23, 1); // parameterisd constructor is called
    // a.printInfo();
    student d; // default constructor is called
    student c = a;

    // Operator Overloading
    if (c == a)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "not same" << endl;
    }

    return 0;
}