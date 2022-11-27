/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
#include <iostream>
using namespace std;
class base1
{
    int d1;

public:
    base1(int i)
    {
        d1 = i;
        cout << "base1 class constructor called" << endl;
    }
    void printdatabase1(void)
    {
        cout << "the vlue od d1 is " << d1 << endl;
    }
};
class base2
{
    int d2;

public:
    base2(int i)
    {
        d2 = i;
        cout << "base2 class constructor called" << endl;
    }
    void printdatabase2()
    {
        cout << "the value of d2 is " << d2 << endl;
    }
};
class derived : public base2, public base1
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base2(b), base1(a)
    {
        derived1 = c;
        derived2 = d;
        cout << "dccc" << endl;
    }
    void printdataderived()
    {
        cout << "the value of derived 1 is " << derived1 << endl;
        cout << "thr value of derived 2 is " << derived2 << endl;
    }
};
int main()
{
    derived harry(1, 2, 3, 4);
    harry.printdatabase1();
    harry.printdatabase2();
    harry.printdataderived();
    return 0;
}
