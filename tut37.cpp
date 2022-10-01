//derived CLASS syntax
// class{{fderived-class-name}}:{{visibility-moe}} {{base-class-name}}
// {
//     class member/methods/etc...
// }
#include<iostream>
using namespace std;
//base class 
class employe
{
    public:
    int id;
    float salary;
    employe(int inpid)
    {
        id=inpid;
        salary=34.0;
    }
    employe(){}
};
//creating a programmer class derived from employe case class 
class programmer:public employe
{
    public:
    int languagecode;
    programmer(int inpid)
    {
        id=inpid;
        languagecode=9;
        
    }
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
    employe harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillF(20);
    cout<<skillF.languagecode<<endl;
    cout<<skillF.id<<endl;
    skillF.getdata();
    return 0;
}