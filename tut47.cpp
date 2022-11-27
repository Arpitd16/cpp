#include<iostream>
#include<math.h>
using namespace std;

class simplecalculater{
    int a,b;
    public:
    void getdata(){
        cout<<"enter the value of a:"<<endl;
        cin>>a;
        cout<<"enter the vlaue of b:"<<endl;
        cin>>b;
    }
    void performdata(){
        cout<<"the value of a+b is:"<<a+b<<endl;
        cout<<"the value of a-b is:"<<a-b<<endl;
        cout<<"the value of a*b is:"<<a*b<<endl;
        cout<<"the value of a/b is:"<<a/b<<endl;

    }
};
class scientificclaculator{
    int a,b;
    public:
    void getdatas(){
        cout<<"enter the value of a:"<<endl;
        cin>>a;
        cout<<"enter the value of b:"<<endl;
        cin>>b;
    }
    void performdatas(){
        cout<<"the vlaue of sin(a) is:"<<sin(a)<<endl;
        cout<<"the vlaue of cos(a)is:"<<cos(a)<<endl;
      

    }
};
class hybridcalculator: public scientificclaculator,public simplecalculater{

};
int main(){
    hybridcalculator clac;
    clac.getdata();
    clac.performdata();
    clac.getdatas();
    clac.performdatas();
    return 0;
}
