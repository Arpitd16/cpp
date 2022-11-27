#include<iostream>
#include<vector>
using namespace std;
template <class T>
void dispaly(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<"";
    }
    cout<<endl;
    
}
int main(){
        vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
    dispaly(vec2);
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s
    dispaly(vec4);

    int element,size;
    cout<<"enter the size of your vector:"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
         cout<<"enter an element  to add to this vector:";
         cin>>element;
         vec1.push_back(element);//push the element 
        /* code */
    }
    dispaly(vec1);
    vector<int> ::iterator iter =vec1.begin();
    vec1.insert(iter+1 ,55);
   // vec1.pop_back();//delete the last element
    dispaly(vec1);
    return 0;    

}