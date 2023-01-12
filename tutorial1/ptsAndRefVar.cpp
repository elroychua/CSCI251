#include <iostream>
#include <string>
using namespace std;

void testPtr1();
void testPtr2(); // function prototype.
void testRef();

int main ()
{
    testPtr1();
    testPtr2();
    testRef();

    cout << endl;
    return 0;
}

void testPtr1 ()
{
    //good practice to cout that you are in a specific function
    cout << endl;
    cout << "Inside testPtr1 () !!! " << endl;
    cout << endl;

    int intVar = 38;
    int * intPtr = nullptr; //nullptr - keyword to null pointer value

    cout << endl;
    cout << "Before initializing pointer (int * intPtr = nullptr...)" << endl;
    cout << endl;

    cout << "intVar's address (&intVar) : " << &intVar << endl;
    cout << "intVar's contents (intVar) : " << intVar << endl;
    cout << "intPtr's address (&intPtr) : " << &intPtr << endl;
    cout << "intPtr's contents (intPtr) : "  << intPtr << endl;

    // Below line WILL CAUSE segmentation fault!!!
    // cout << "contents of what intPtr is pointing to (*intPtr) : " << *intPtr << endl;

    cout << endl;
    cout << "After initializing pointer (intPtr = new int(168) ...)" << endl;
    cout << endl;

    intPtr = new int (168); //placing 168 in intPtr : declare pointer, initialize variable into ptr.

    cout << "intVar's address (&intVar) : " << &intVar << endl;
    cout << "intVar's contents (intVar) : " << intVar << endl;
    cout << "intPtr's address (&intPtr) : " << &intPtr << endl;
    cout << "intPtr's contents (intPtr) : "  << intPtr << endl;

    cout << "contents of what intPtr is pointing to (*intPtr) : " << *intPtr << endl;
    cout << "address of contents of what intPtr is pointing to (&(*intPtr)) : " << &(*intPtr) << endl;

    cout << endl;

    delete intPtr; //helps to minimise data leakage
}

void testPtr2 ()
{
    cout << endl;
    cout << "Inside testPtr2 () !!! " << endl;
    cout << endl;

    int intVar = 138;
    int * intPtr;
    intPtr = &intVar;

    cout << endl;
    cout << "Setting intPtr = &intVar ..." << endl;
    cout << endl;

    cout << "intVar's address (&intVar) : " << &intVar << endl;
    cout << "intVar's contents (intVar) : " << intVar << endl;
    cout << "intPtr's address (&intPtr) : " << &intPtr << endl;
    cout << "intPtr's contents (intPtr) : "  << intPtr << endl;
    cout << "contents of what intPtr is pointing to (*intPtr) : " << *intPtr << endl;

    cout << endl;
    cout << "Setting intPtr = new int (368) ... " << endl;
    cout << endl;

    intPtr = new int(368);

    cout << "intVar's address (&intVar) : " << &intVar << endl;
    cout << "intVar's contents (intVar) : " << intVar << endl;
    cout << "intPtr's address (&intPtr) : " << &intPtr << endl;
    cout << "intPtr's contents (intPtr) : "  << intPtr << endl;

    cout << "contents of what intPtr is pointing to (*intPtr) : " << *intPtr << endl;
    cout << "address of contents of what intPtr is pointing to (&(*intPtr)) : " << &(*intPtr) << endl;

}
void testRef ()
{
    cout << endl;
    cout << "Inside testRef () !!! " << endl;
    cout << endl;

    int intVar1 = 38;
    int intVar2 = 68;
    int intVar3 = 98;

    int & alias = intVar1;

    int * intPtr = nullptr;

    cout << endl;
    cout << "In the beginning" << endl;
    cout << endl;

    cout << "intVar1's address (&intVar1) : " << &intVar1 << endl;
    cout << "intVar1's contents (intVar1) : " << intVar1 << endl;
    cout << "intVar1's address (&intVar2) : " << &intVar2 << endl;
    cout << "intVar1's contents (intVar2) : " << intVar2 << endl;
    cout << "intVar1's address (&intVar3) : " << &intVar3 << endl;
    cout << "intVar1's contents (intVar3) : " << intVar3 << endl;
    cout << "alias's address (&alias) : " << &intVar1 << endl;
    cout << "alias's contents (alias) : " << intVar1 << endl;

    cout << endl;
    cout << "Setting intVar1 = 138 ..." << endl;
    cout << endl;

    intVar1 = 138;

    cout << "intVar1's address (&intVar1) : " << &intVar1 << endl;
    cout << "intVar1's contents (intVar1) : " << intVar1 << endl;
    cout << "intVar1's address (&intVar2) : " << &intVar2 << endl;
    cout << "intVar1's contents (intVar2) : " << intVar2 << endl;
    cout << "intVar1's address (&intVar3) : " << &intVar3 << endl;
    cout << "intVar1's contents (intVar3) : " << intVar3 << endl;
    cout << "alias's address (&alias) : " << &intVar1 << endl;
    cout << "alias's contents (alias) : " << intVar1 << endl;

    cout << endl;
    cout << "Setting alias = 1638 ..." << endl;
    cout << endl;

    alias = 1638;

    cout << "intVar1's address (&intVar1) : " << &intVar1 << endl;
    cout << "intVar1's contents (intVar1) : " << intVar1 << endl;
    cout << "intVar1's address (&intVar2) : " << &intVar2 << endl;
    cout << "intVar1's contents (intVar2) : " << intVar2 << endl;
    cout << "intVar1's address (&intVar3) : " << &intVar3 << endl;
    cout << "intVar1's contents (intVar3) : " << intVar3 << endl;
    cout << "alias's address (&alias) : " << &intVar1 << endl;
    cout << "alias's contents (alias) : " << intVar1 << endl;

}
/*
General Notes:

'&' placed BEFORE a variable => extracts the address of that variable
Eg. double aVar = 1.68;         cout << &aVar << endl;

'&' placed AFTER a data type => declares a reference variable
Eg. double aVar = 3.68;         double &alias = aVar;

'*' placed BEFORE a pointer variable => de-reference that pointer variable
'*' placed AFTER a data type => declares a pointer variable

E.g.
int * intPtr = NULL;    *intPtr = 33;   cout << *intPtr << endl;
*/