#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    // creating a constructor
// constructor is a special member function with the same name as of the class.
//it is used to initialize the objects of its class
//it is automatically invoked whenever an object is created

complex(void);//constructor declaration

void printnumber(){
    cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
}
};
complex ::complex(void)//this is default constructor as it takes no parameters
{
    a=12;
    b=4;
}
int main()
{
    complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}