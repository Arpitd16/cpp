#include <iostream>
using namespace std;
int c = 45;
int main()
{
    //******************build in data types****************
    // int a, b, c;
    // cout << "enter the value of a:" << endl;
    // cin >> a;
    // cout << "enter the value of b:" << endl;
    // cin >> b;
    // c = a + b;
    // cout << "the sum of" << c << endl;
    // cout << "the global c is" << ::c;//::symbol is use to varify the global value

    //********************reference variables******************
    // float x=3.15;
    // float &y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //*************************************float,double and long double *************************
    // float d=35.5;
    // long double e=34.4L;
    // cout<<"the size of 34.4 is"<<sizeof(34.4)<<endl;
    // cout<<"the size of 34.4f is"<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4F is"<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4l is"<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4L is"<<sizeof(34.4L)<<endl;
    // cout<<"the value of d is"<<d<<endl<<"the value of e is"<<e;
   
    //****************************typecasting*******************
    
    int a = 87;
    float b = 76.88;
    cout << "the value of a is " << (float)a << endl;
    cout << "the valu7e of a is " << float(a) << endl;

    cout << "the value of b is " << (int)b << endl;
    cout << "the value of b is " << int(b) << endl;
    int c = int(b);
    cout << "the expression is " << a + b << endl;
    cout << "the expression is " << a + int(b) << endl;
    cout << "the expression is " << a + (int)b << endl;
    return 0;
}