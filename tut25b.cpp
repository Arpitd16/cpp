#include<iostream>
using namespace std;

class employe
{
    int id;
   // int salary;
    public:
    void setid(void)
    {
        //salary=22;
        cout<<"enter the id of employe"<<endl;
        cin>>id;

    }
    void getid(void){
        cout<<"the id of this employee is "<<id<<endl;
    }
};
int main (){
//employe harry,rohan,lovish,arpit;
//harry.setid();
employe fb[4];
for (int i = 0; i < 4; i++)
{
    /* code */
    fb[i].setid();
fb[i].getid();
    }
return 0;
}