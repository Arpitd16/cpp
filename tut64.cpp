#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
    T *arr;
    int size;
    vector(int a){
        size=a;
        arr=new T[size];
    }
    T dotproduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            /* code */
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int  main(){
    vector<float> v1(3);
    v1.arr[0]=1.5;
    v1.arr[1]=3.4;
    v1.arr[2]=4.2;
    vector<float> v2(3);
    v2.arr[0]=0.5;
    v2.arr[1]=3.5;
    v2.arr[2]=4.5;
    float a=v1.dotproduct(v2);
    cout<<a<<endl;
    return 0;
}
