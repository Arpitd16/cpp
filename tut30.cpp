#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int,int);// complex(int x, int y)
// {
//     a=x;
//     b=y;
// }you write this coe this place bhi

    void printnumber()
    {
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
    }
} ;
complex:: complex(int x, int y)
{
    a=x;
    b=y;
}
int main (){
  //implicit call
    complex a(4,6);
    a.printnumber();
    //explicit call
    complex b=complex(5,7);
     b.printnumber();
     return 0;

}