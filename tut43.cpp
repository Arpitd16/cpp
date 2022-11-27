#include<iostream>
using namespace std;

class base1{
    public:

    void greet(){
        cout<<"how are you?"<<endl;
    }
};
class base2{
    public:
    void greet()
    {
        cout<<"kaisw"<<endl;

    }
};
class derived: public base1,public base2{
    int a;
    public:
    void greet(){
        base2::greet();
    }
};
int main (){
    base1 ad1;
    base2 ad2;
    ad1.greet();
    ad2.greet();
    derived d;
    d.greet();
    return 0;
}