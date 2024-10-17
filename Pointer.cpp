#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << "address of a- ";
    // & - used for address of a variable
    cout << &a << endl;
    // * - for making pointer
    int *aptr = &a;
    cout << "pointer of a- ";
    cout << aptr << endl;

    float price = 34.232;
    float *fptr = &price;
    cout << "address of float price- ";
    cout << &price << endl;
    cout << "pointer of float price- ";
    cout << fptr << endl;

    // Pointer to pointer

    int **parptr = &aptr;
    cout << "pointer to pointer of aptr- ";
    cout << parptr << endl;
    cout << "address of aptr- ";
    cout << &aptr << endl;

    // dereference operator (value at address operator)
    cout << "Value at address pointer a- " << *(&a) << endl;
    cout << "Value at address pointer aptr- " << *(aptr) << endl;
    cout << "Value at address pointer to pointer parptr- " << **(parptr) << endl;
    cout << "Value at address pointer parptr- " << *(parptr) << endl;
    cout << "Value at aptr- " << (aptr) << endl;

    // Null Pointer - a pointer that doesn't point to any location
    // we can not dereference a null pointer
    // *ptr
    int *nptr = NULL;
    int *ptr;
    cout << "garbage value of a pointer- " << ptr << " address of ptr- " << &ptr << endl;
    ptr = NULL;
    cout << "ptr assigned to null- " << ptr << " address of ptr- " << &ptr << endl;

    // pass by reference
    // two types - 1. pointers (normal just by using & while calling function and at function parameters using * symbol pointer)
    // changeA(&a); changeA(int *a){}
    // 2. references/alias(at function parameters just by another name or same but using & symbol called alias)
    // change(a); changeA(int &b){}

    // array pointer
    // array name is actually a pointer
    int arr[] = {1, 2, 3, 4, 5};
    cout << "array pointer arr " << arr << endl;   // gives 0th index address
    cout << "array pointer *arr " << *arr << endl; // gives 0th index value

    // pointer arithmetic
    int b = 10;
    int *c = &b;
    cout << "pointer address " << c << endl;
    c++;
    cout << "pointer address updated " << c << endl;

    // pointer to pointer arithmetic
    // we can not add two pointers
    // *ptr+*ptr1; //is not allowed
    // but we can subtract two pointers which give the no of blocks of type(int/anytypes)
    // ptr1 - ptr2;
    // 108 - 100 //4 = 1 int
    // 2 int
    int *ptr3;
    int *ptr4 = ptr3 + 2;
    cout << "subtracting pointers " << ptr4 - ptr3 << endl;
    // we can also compare 2 pointers
    int *ptr5;
    cout << "subtracting pointers " << (ptr5 < ptr3) << endl;

    return 0;
}