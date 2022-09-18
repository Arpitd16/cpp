#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // int a=34;
    // cout<<"the value of a was:"<<a;
    // a=45;
    // cout<<"the value of a is:"<<a;
    //constants in c++
    // const int a=3;
    // cout<<"the value of a was:"<<a<<endl;
    // a=56;//you will get error because a is constant
    // cout<<"the value is a :"<<a<<endl;

    //multipulators in c++
    // int a=2,b=4,c=5443;
    // cout<<"the value of a without setw is:"<<a<<endl;
    // cout<<"the value of b without setw is:"<<b<<endl;
    // cout<<"the value of c without setw is:"<<c<<endl;
    // cout<<"the value of a is :"<<setw(4)<<a<<endl;
    // cout<<"the value of b is :"<<setw(4)<<b<<endl;
    // cout<<"the value of c is :"<<setw(4)<<c<<endl;

    //operator precedence
    int a=4,b=3;
    int c=((((a*5)+b)-45)+87);
    cout<<c;    
    return 0;
}