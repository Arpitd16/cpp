#include<iostream>
using namespace std;
class base{
private:
int a;
protected://it is derive for inherited function
int b;

};
class derive:protected base{

};
int main(int argc, char const *argv[])
{
    base a;
    derive d;
    //cout<<d.a;//will not work since a is protected in both base as well as derived class
    return 0;
}
