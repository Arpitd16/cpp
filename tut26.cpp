#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend complex sumcomplex(complex o1, complex o2);

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex a1, a2, sum;
    a1.setnumber(1, 4);
    a1.printnumber();

    a2.setnumber(3, 4);
    a2.printnumber();

    sum = sumcomplex(a1, a2);
    sum.printnumber();

    return 0;
}
/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/