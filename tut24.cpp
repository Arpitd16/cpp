#include<iostream>
using namespace std;

class employe{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"enter the id"<<endl;
        cin>>id;
        count++;
    
    }
    void getdata(void){
        cout<<"the id of this employe is "<<id<<"and this is employee number "<<count<<endl;
    }
    static void getcount(void){
        //cout<<id;//throws error
        cout<<"the value of count is"<<count<<endl;
    }
};
//count is the static data member of class employee
int employe::count;//default value is 0
int main(){
    employe harry,rohan,lovish;
    //harry.id=1;
    //harry.count=1;//cannot do this as id and count are private
    harry.setdata();
    harry.getdata();
    employe::getcount();
    rohan.setdata();
    rohan.getdata();
    employe::getcount();
    lovish.setdata();
    lovish.getdata();
    employe::getcount();
    return 0;
    
    }