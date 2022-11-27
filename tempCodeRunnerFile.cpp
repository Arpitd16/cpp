#include<iostream>
using namespace std;
int fun(int &x,int c){
    c=c-1;
    if(c==0)
    return 1;
    x=x+1;
    return fun(x,c)*x;//when the refernce variable are you use that you take *x is last ex; p=5 but in this case we take x=9
}//you calculate x in side refernce to p
int main(){
    int p=5;
    cout<<fun(p,p);
    return 0;
}